#ifndef __TDL_LIST_H__
#define __TDL_LIST_H__


class Node {
public:
	int data;
	Node* next;	
	Node* back;
};

class DLList {
private:
	Node* head;
	Node* tail;

public:
	DLList();
	void insertHead(Node*);
	void insertTail(Node*);
	void delHead();
	void delTail();
	void traverse();
	~DLList();
};
#endif

