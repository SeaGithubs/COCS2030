#include <iostream>
#include "DL-List.h"

using namespace std;
DLList::DLList() {
    head = nullptr;
    tail = nullptr;
}
void DLList::insertHead(Node* x) {
    x->back = tail;
    x->next = head;
    head = x;
    
}
void DLList::insertTail(Node* x) {
    x->next = tail;
    tail = x;
}
void DLList::delHead() {
    if (head == nullptr) {
        cout << "The Linked List is empty" << endl;
    }else{
        Node* temp = head;
        head = head->next;
        delete temp;
    }
}
void DLList::delTail() {
    if (tail == nullptr) {
        cout << "The Linked List is empty" << endl;
    }else{
        Node* temp = tail;
        tail = tail->next;
        delete temp;
    }
}
void DLList::traverse() {
    if (head == nullptr) {
        cout << "The Linked List is empty" << endl;
    }else {
        Node* curr = head;
        while (curr != nullptr) {
        cout << "[" << curr->data << "] ";
        curr = curr->next;
        }
    cout << endl;
    }
}
DLList::~DLList() {
    Node* curr = head;
    while (curr != nullptr) {
        Node* temp = curr;
        curr = curr->next;
        delete temp;
    }
}
