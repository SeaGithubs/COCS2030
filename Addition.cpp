#include <iostream>
#include <stdlib.h>

using namespace std;

//Function to add up argv 
int AddUp(int A[], int n) {
    int sum = 0;
    for(int i = 0; i <= n; i++){
        sum = sum + A[i]; 
    }
    return sum;
}

int main(int argc, char* argv[]){
    int numbers[10];   // array for the command line argument (CLA) integers
    if(argc <= 11){
        for(int i = 1; i <= argc; i++){
            numbers[i-1] = atoi(argv[i]); //converts the CLA srings into integers and stores them
        }
        cout << AddUp(numbers, argc-1)<< endl;
    }else{
        cout << "Please use less than 10 numbers." << endl;
    }
}