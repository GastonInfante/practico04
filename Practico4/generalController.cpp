#include "stdafx.h"
#include "pointerArithmetic.h"
#include "swapIntegers.h"
#include "generalController.h"

class nodo {
public:
	nodo(int v, nodo *next = NULL, nodo *prev = NULL) :
		value(v), nextNodo(next), previousNodo(prev) {}
private:
	int value;
	nodo *nextNodo;
	nodo *previousNodo;

	friend class list;
};

typedef nodo *pnodo;

class list {
public:
	list() : plist(NULL) {}
	~list();
	void insert(int v);
	bool cleanList() { return plist == NULL; }
private:
	pnodo plist;
};

list::~list()
{
	pnodo aux;
	while (plist) {
		aux = plist;
		plist = plist->nextNodo;
		delete aux;
	}
}


void list::insert(int v)
{
	if (v == 0)
	{
		printf("El numero debe ser 1 o mayor");
	}
	else
	{
		bool primo = true;
		for (int num = 2; num < v && primo; num++)
		{
			if (v % num == 0)
			{
				primo = false;
				break;
			}
		}
		if (primo) printf("El valor ingresado es primo, no ha sido incluido en la lista");
		else
		{
			if (cleanList())
			{
				pnodo newNodo = new nodo(v);
				plist = newNodo;
			}
			else {
				pnodo newNodo = new nodo(v, plist->nextNodo, plist);
				plist->nextNodo = newNodo;
				if (newNodo->nextNodo) newNodo->nextNodo->previousNodo = newNodo;
			}
			printf("El valor es primo y ha ingresado correctamente en la lista");
		}
	}
}

void steps(int choice)
{
	switch (choice)
	{
		case 1:
			firstExercises();
			break;
		case 2:
			listExercise();
			break;
		default:
			break;
	}
}
void firstExercises() {
	printf("Ejercicio2: ");
	arithmetic();
	printf("\nEjercicio3:\nIngrese dos numeros enteros para swap1\n");
	int *num1 = 0;
	int *num2 = 0;
	scanf_s("%p%p", &num1, &num2);
	swap_1(num1, num2);
	int num3 = 0;
	int num4 = 0;
	printf("\nIngrese dos numeros enteros para swap2\n");
	scanf_s("%d%d", &num3, &num4);
	swap_2(num3, num4);
}

void listExercise()
{
	list List;

	int menuExercise = 0;
	int value = 0;
	printf("Cuantos valores desea ingresar a la lista?\n");
	scanf_s("%d", &menuExercise);
	printf("Recuerde que solo puede ingresar valores enteros que no sean primos\n");
	for (int i = 1; i <= menuExercise; i++)
	{
		printf("\nIngrese el valor %d:\n", i);
		scanf_s("%d", &value);
		List.insert(value);
	}
}

