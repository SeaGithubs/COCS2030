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
        cout << "______________________" << endl;
        cin >> input;
        if(input == 1){

        }else if(input == 2){
            int temp;
            // Assuming Node has an 'int data' member
            cout << "Enter node data: ";
            cin >> temp;
            newNode = new Node;
            newNode->data = temp;
            newNode->next = nullptr;
            DLL->insertTail(newNode);
        }else if(input == 3){
            
        }else if(input == 4){
            
        }else if(input == 5){
            
        }else if(input == 6){
            
        }

    }
}