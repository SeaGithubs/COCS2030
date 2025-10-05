#include <iostream>
#include "DLList.cpp"
using namespace std;

int main(){
    DLList* DLL = new DLList;
    Node* newNode;
    int input = -1;
    while (input != 6){
        cout << "______________________" << endl;
        DLL->traverse();
        cout << "1) Insert a node at the head" << endl;
        cout << "2) Insert a node at the tail" << endl;
        cout << "3) Delete the node at the head" << endl;
        cout << "4) Delete the node at the tail" << endl;
        cout << "5) Traverse the list" << endl;
        cout << "6) Quit" << endl;
        cout << "______________________" << endl;
        cin >> input;
        if(input == 1){
            int temp;
            cout << "Enter node data: ";
            cin >> temp;
            newNode = new Node;
            newNode->back = nullptr;
            newNode->data = temp;
            newNode->next = nullptr;
            DLL->insertHead(newNode);
            
        }else if(input == 2){
            int temp;
            cout << "Enter node data: ";
            cin >> temp;
            newNode = new Node;
            newNode->back = nullptr;
            newNode->data = temp;
            newNode->next = nullptr;
            DLL->insertTail(newNode);
            
        }else if(input == 3){
            DLL->delHead();
        }else if(input == 4){
            DLL->delTail();
        }else if(input == 5){
            DLL->traverse();
        }

    }
}