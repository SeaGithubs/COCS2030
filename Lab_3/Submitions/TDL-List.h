#ifndef __TDL_LIST_H__
#define __TDL_LIST_H__

using namespace std;

template <class T>
class Node {
public:
	T data;
	Node<T>* next;	
	Node<T>* back;
};

template <class T>
class DLList {
private:
	Node<T>* head;
	Node<T>* tail;

public:
	DLList<T>();
	void insertHead(Node<T>*);
	void insertTail(Node<T>*);
	void delHead();
	void delTail();
	void traverse();
	~DLList<T>();
};

template <class T>
DLList<T>::DLList() {
    head = nullptr;
    tail = nullptr;
}

template <class T>
void DLList<T>::insertHead(Node<T>* x) {
    x->next = head;
    x->back = nullptr;
    if (head != nullptr) {
        head->back = x;
    }else{
        tail = x;
    }
    head = x;
}

template <class T>
void DLList<T>::insertTail(Node<T>* x) {
    x->next = nullptr;
    x->back = tail;
    if (tail != nullptr) {
        tail->next = x;
    }else{
        head = x;
    }
    tail = x;

}

template <class T>
void DLList<T>::delHead() {
    if (head == nullptr) {
        cout << "The Linked List is empty" << endl;
    }else{
        Node<T>* temp = head;
        head = head->next;
        if(head == nullptr){
            tail = nullptr;
        }else{
            head->back = nullptr;;
        }
        delete temp;
    }
}

template <class T>
void DLList<T>::delTail() {
    if (tail == nullptr) {
        cout << "The Linked List is empty" << endl;
    }else{
        Node<T>* temp = tail;
        tail = tail->back;
        if(tail == nullptr){
            head = nullptr;
        }else{
            tail->next = nullptr;
        }
        delete temp;
    }
}

template <class T>
void DLList<T>::traverse() {
    if (head == nullptr) {
        cout << "The Linked List is empty" << endl;
    }else {
        Node<T>* curr = head;
        while (curr != nullptr) {
        cout << "[" << curr->data << "] ";
        curr = curr->next;
        }
    cout << endl;
    }
}

template <class T>
DLList<T>::~DLList() {
    Node<T>* curr = head;
    while (curr != nullptr) {
        Node<T>* temp = curr;
        curr = curr->next;
        delete temp;
    }
}

#endif

