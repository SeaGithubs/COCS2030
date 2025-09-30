#include <iostream>
#include "DLList.cpp"
using namespace std;

int main(){
    DLList DLL;
    int input = -1;
    while (input != 6){
        cout << "______________________" << endl;
        DLL.traverse();
        cout << "______________________" << endl;
        cin >> input;
        if(input = 1){

        }else if(input = 2){
            Node temp;
            // Assuming Node has an 'int data' member
            cout << "Enter node data: ";
            cin >> temp.data;
            DLL.insertHead(&temp);
        }else if(input = 3){
            
        }else if(input = 4){
            
        }else if(input = 5){
            
        }else if(input = 6){
            
        }
        input = 6;
    }
}