#include <iostream>
#include <stdlib.h>

using namespace std;

int AddUp(int A[], int n) {

}

int main(int argc, char* argv[]){
    int numbers[10];
    if(argc < 11){
        for(int i = 1; i < argc; i++){
            numbers[i-1] = int(argv[i]);
        }
        AddUp(numbers, argc-1);
    }else{
        cout << "Please use less than 10 numbers." << endl;
    }
}