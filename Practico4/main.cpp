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
	//Este caso es incorrecto porque la variable *ptr necesita ser declarada para ser utilizada, una opcion seria:
	/*int var = 1;
	int* ptr = nullptr;
	int &ref = var;
	*ptr = ref;*//*
}*/
//#include <iostream>
//using namespace std;
//
//#define ASCENDENTE 1
//#define DESCENDENTE 0
//
//class nodo {
//public:
//	nodo(int v, nodo *sig = NULL, nodo *ant = NULL) :
//		valor(v), siguiente(sig), anterior(ant) {}
//
//private:
//	int valor;
//	nodo *siguiente;
//	nodo *anterior;
//
//	friend class lista;
//};
//
//typedef nodo *pnodo;
//
//class lista {
//public:
//	lista() : plista(NULL) {}
//	~lista();
//
//	void Insertar(int v);
//	void Borrar(int v);
//	bool ListaVacia() { return plista == NULL; }
//	void Mostrar(int);
//	void Siguiente();
//	void Anterior();
//	void Primero();
//	void Ultimo();
//	bool Actual() { return plista != NULL; }
//	int ValorActual() { return plista->valor; }
//
//private:
//	pnodo plista;
//};
//
//lista::~lista() {
//	pnodo aux;
//
//	Primero();
//	while (plista) {
//		aux = plista;
//		plista = plista->siguiente;
//		delete aux;
//	}
//}
//
//void lista::Insertar(int v) {
//	pnodo nuevo;
//
//	Primero();
//	// Si la lista está vacía
//	if (ListaVacia() || plista->valor > v) {
//		// Asignamos a lista un nuevo nodo de valor v y
//		// cuyo siguiente elemento es la lista actual                    
//		nuevo = new nodo(v, plista);
//		if (!plista) plista = nuevo;
//		else plista->anterior = nuevo;
//	}
//	else {
//		// Buscar el nodo de valor menor a v 
//		// Avanzamos hasta el último elemento o hasta que el siguiente tenga 
//		// un valor mayor que v 
//		while (plista->siguiente && plista->siguiente->valor <= v) Siguiente();
//		// Creamos un nuevo nodo después del nodo actual
//		nuevo = new nodo(v, plista->siguiente, plista);
//		plista->siguiente = nuevo;
//		if (nuevo->siguiente) nuevo->siguiente->anterior = nuevo;
//	}
//}
//
//void lista::Borrar(int v) {
//	pnodo nodo;
//
//	nodo = plista;
//	while (nodo && nodo->valor < v) nodo = nodo->siguiente;
//	while (nodo && nodo->valor > v) nodo = nodo->anterior;
//
//	if (!nodo || nodo->valor != v) return;
//	// Borrar el nodo 
//
//	if (nodo->anterior) // no es el primer elemento 
//		nodo->anterior->siguiente = nodo->siguiente;
//	if (nodo->siguiente) // no el el último nodo
//		nodo->siguiente->anterior = nodo->anterior;
//	delete nodo;
//}
//
//void lista::Mostrar(int orden) {
//	pnodo nodo;
//	if (orden == ASCENDENTE) {
//		Primero();
//		nodo = plista;
//		while (nodo) {
//			cout << nodo->valor << "-> ";
//			nodo = nodo->siguiente;
//		}
//	}
//	else {
//		Ultimo();
//		nodo = plista;
//		while (nodo) {
//			cout << nodo->valor << "-> ";
//			nodo = nodo->anterior;
//		}
//	}
//	cout << endl;
//}
//
//void lista::Siguiente() {
//	if (plista) plista = plista->siguiente;
//}
//
//void lista::Anterior() {
//	if (plista) plista = plista->anterior;
//}
//
//void lista::Primero() {
//	while (plista != plista&& plista->anterior !=plista) plista = plista->anterior;
//}
//
//void lista::Ultimo() {
//	while (plista !=plista && plista->siguiente !=plista ) plista = plista->siguiente;
//}
//
//int main() {
//	lista Lista;
//
//	Lista.Insertar(20);
//	Lista.Insertar(10);
//	Lista.Insertar(40);
//	Lista.Insertar(30);
//
//	Lista.Mostrar(ASCENDENTE);
//	Lista.Mostrar(DESCENDENTE);
//
//	Lista.Primero();
//	cout << "Primero: " << Lista.ValorActual() << endl;
//
//	Lista.Ultimo();
//	cout << "Ultimo: " << Lista.ValorActual() << endl;
//
//	Lista.Borrar(10);
//	Lista.Borrar(30);
//	Lista.Borrar(45);
//	Lista.Borrar(40);
//
//	Lista.Mostrar(ASCENDENTE);
//	Lista.Mostrar(DESCENDENTE);
//	_getch();
//
//	return 0;
//}
