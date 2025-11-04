#include <iostream>
#include "BST.cpp"
using namespace std;

int main(){
    BST* Tree = new BST;
    int input = -1;
    while (input != 6){
        cout << "______________________" << endl;
        Tree->traversal(1);
        cout << "1) Search" << endl;
        cout << "2) Traverse" << endl;
        cout << "3) Insert" << endl;
        cout << "4) Delete" << endl;
        cout << "5) Minimum" << endl;
        cout << "6) Maximum" << endl;
        cout << "7) successor" << endl;
        cout << "8) predecessor" << endl;
        cout << "9) Quit" << endl;
        cout << "______________________" << endl;
        cin >> input;
        if(input == 1){
            int temp;
            cout << "Enter the number you are looking for: ";
            cin >> temp;
            Tree->search(temp);
            
        }else if(input == 2){
            int temp;
            cout << "Enter 1 for in order, 2 for preorder, or 3 for postorder: ";
            cin >> temp;
            Tree->traversal(temp);
            
            
        }else if(input == 3){
            int temp;
            cout << "Enter the number you are inserting: ";
            cin >> temp;
            Tree->insert(temp);
        }else if(input == 4){
            int temp;
            cout << "Enter the number you are inserting: ";
            cin >> temp;
            Tree->del(temp);
        }else if(input == 5){
            
        }

    }
}