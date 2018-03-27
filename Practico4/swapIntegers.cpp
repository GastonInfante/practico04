#include "stdafx.h"

void swap_1(int *p1, int *p2)
{
	printf("\nSWAP_1: Los valores son: %p, %p", p1, p2);
	int *aux = p1;
	p1 = p2;
	p2 = aux;
	printf("\nSWAP_1: Los valores invertidos son: %p, %p", p1,p2);

}
void swap_2(int &p1, int &p2)
{
	printf("\nSWAP_1: Los valores son: %d, %d", p1, p2);
	int	&aux = p1;
	p1 = p2;
	p2 = aux;
	printf("\nSWAP_1: Los valores invertidos son: %d, %d", p1, p2);

}