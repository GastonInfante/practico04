#pragma once

#define UPWARD 1
#define FALLING 0

class List {
public:
	List() : pList(NULL) {}
	~List() {
		while (pList) {
			theNode aux;
			aux = pList;
			pList = pList-> pNextNode;
			delete aux;
		}
	};
	void insert(int v);
	void showNodes(int);
	void firstNode();
	void lastNode();
	bool cleanList() { return pList == NULL; }
private:
	theNode pList;
};