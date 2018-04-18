#include "stdafx.h"
#include "pointerArithmetic.h"
#include "swapIntegers.h"
#include "generalController.h"
#include "Node.h"
#include "List.h"


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
	List list;

	int menuExercise = 0;
	int value = 0;
	printf("Cuantos valores desea ingresar a la lista?\n");
	scanf_s("%d", &menuExercise);
	printf("Recuerde que solo puede ingresar valores enteros que no sean primos\n");
	for (int i = 1; i <= menuExercise; i++)
	{
		printf("\nIngrese el valor %d:\n", i);
		scanf_s("%d", &value);
		list.insert(value);
	}
	printf("\n\nLos nodos en la lista son: \n");
	list.showNodes(FALLING);

}

