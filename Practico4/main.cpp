#include "stdafx.h"
#include "generalController.h"

int main()
{
	printf("Bienvenido!\n1_Ejercicios 2,3\n2_Ejercicio 4\n");
	int choice = 0;
	printf("Ingrese un valor y presione ENTER:\n");
	scanf_s("%d", &choice);
	steps(choice);
	_getch();
	return 0;
}

//void exercise1()
//{
	//Indicar en cada caso si es o no es válido :
	
	//int var = 40;	
	//int &ref = var;
	//Este caso es correcto, la variable var recibe como literal un valor entero, que coincide con su tipo y &ref, toma como literal, la direccion de var

	//int &ref = 1;
	//Este caso es incorrecto porque la variable &ref porque espera como literal, una direccion y no un entero como esta asignado
	//La forma correcta seria: 
	//int &ref = var; 
	
	/*int var = 1;
	int *ptr;
	int &ref = var;
	*ptr = ref;*/
	//Este caso es valido pero la variable *ptr necesita ser declarada para ser utilizada, una opcion seria:
	/*int var = 1;
	int &ref = var;
	int* ptr = ref;
}*/

