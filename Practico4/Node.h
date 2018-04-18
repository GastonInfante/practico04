#pragma once

class Node {
public:
	Node(
		int value, 
		Node *next = nullptr, 
		Node *prev = nullptr
	) : pValue(value), pNextNode(next), pPreviousNode(prev) {}
private:
	int pValue;
	Node *pNextNode;
	Node *pPreviousNode;
	friend class List;
};

typedef Node *theNode;
