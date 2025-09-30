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
            int temp;
            cin >> temp;
            DLL.insertHead(temp*);
        }else if(input = 3){
            
        }else if(input = 4){
            
        }else if(input = 5){
            
        }else if(input = 6){
            
        }
        input = 6;
    }
}