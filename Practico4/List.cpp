#include "stdafx.h"
#include "Node.h"
#include "List.h"

using namespace std;



void List::insert(int v){
	if (v == 0){
		printf("El numero debe ser 1 o mayor");
	}
	else{
		bool primo = true;
		for (int num = 2; num < v && primo; num++){
			if (v % num == 0){
				primo = false;
				break;
			}
		}
		if (primo) printf("El valor ingresado es primo, no ha sido incluido en la lista");
		else{
			if (cleanList()){
				theNode newNode = new Node(v);
				pList = newNode;
			}
			else {
				lastNode();
				theNode newNode = new Node(v, pList->pNextNode, pList);
				pList->pNextNode = newNode;
				if (newNode->pNextNode) newNode->pNextNode->pPreviousNode = newNode;
			}
			printf("El valor no es primo y ha ingresado correctamente en la lista");
		}
	}
}
void List::showNodes(int order)
{
	theNode node;
	if (order == FALLING) {
		firstNode();
		node = pList;
		while (node) {
			cout << node->pValue << "\n";
			node = node->pNextNode;
		}
	}
	else {
		lastNode();
		node = pList;
		while (node) {
			cout << node->pValue << "\n";
			node = node->pPreviousNode;
		}
	}
	cout << endl;
}

void List::firstNode()
{
	while (pList && pList->pPreviousNode) pList = pList->pPreviousNode;
}

void List::lastNode()
{
	while (pList && pList->pNextNode) pList = pList->pNextNode;
}

