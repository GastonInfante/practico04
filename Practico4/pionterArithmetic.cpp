#include "stdafx.h"
#include "pointerArithmetic.h"

void arithmetic() {
	int indice[] = { 1,2,3,4,5,6,7,8,9,10 };
	int *ptr = &indice[0];
	ptr++;
	if ((*ptr * 5) == (*(ptr +indice[7])))
	{
		printf("true");
	}
	else
	{
		printf("false");
	}
}