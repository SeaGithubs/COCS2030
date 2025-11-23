#include <iostream>
#include "BST.cpp"
using namespace std;

int main(){
    BST BST;
    int input = -1;
    while (input != 9){
        cout << "______________________" << endl;
        BST.traversal(1);
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
            BST.search(temp);
            
        }else if(input == 2){
            int temp;
            cout << "Enter 1 for in order, 2 for preorder, or 3 for postorder: ";
            cin >> temp;
            BST.traversal(temp);
            
            
        }else if(input == 3){
            int temp;
            cout << "Enter the number you are inserting: ";
            cin >> temp;
            BST.insert(temp);
        }else if(input == 4){
            int temp;
            cout << "Enter the number you are inserting: ";
            cin >> temp;
            BST.del(temp);
        }else if(input == 5){
            
        }

    }
}