#ifndef __LINKED_LIST_H__
#define __LINKED_LIST_H__

class Node {
public:
	int data;
	Node* next;	
}

class LinkedList {
private:
	Node* head;

public:
	LinkedList();
	void insert(Node*);
	void del();
	void traverse();
	~LinkedList();
}
#endif

