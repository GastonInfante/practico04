#include "stdafx.h"
#include "pointerArithmetic.h"
#include "swapIntegers.h"
#include "generalController.h"

void steps(int choice)
{
	switch (choice)
	{
		case 1:
			firstExercises();
			break;
		case 2:
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
	scanf_s("%d%d", &num1, &num2);
	swap_1(num1, num2);
	int num3 = 0;
	int num4 = 0;
	printf("\nIngrese dos numeros enteros para swap2\n");
	scanf_s("%d%d", &num3, &num4);
	swap_2(num3, num4);
}

