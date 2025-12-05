#include <iostream>
using namespace std;

void QuickSort(int A[],int p,int r);
int Partition(int A[],int p,int r);

int main(){
    int size = 8;
    int list[8] = {2,8,7,1,3,5,6,4};
    //printing list before sort
    cout << "Before Sort: ";
    for (int i=0; i < 8; i++){
        cout << list[i] << ", ";
    }
    cout << endl;
    //sorting the list
    QuickSort(list, 0, size-1);
    //printing list after sort
    cout << "After Sort: ";
    for (int i=0; i < 8; i++){
        cout << list[i] << ", ";
    }
    cout << endl;
}

void QuickSort(int A[],int p,int r){
    if(p<r){
        int q = Partition(A, p, r);
        QuickSort(A, p, q - 1);
        QuickSort(A, q + 1, r );
    }
}

int Partition(int A[],int p,int r){
    int x = A[r];
    int i = p - 1;
    int temp;

    for (int j = p; j <= r - 1; j++){
        if (A[j] <= x){
            i = i + 1;

            temp = A[j];
            A[j] = A[i];
            A[i] = temp;
        }
    }

    temp = A[i+1];
    A[i+1] = A[r];
    A[r] = temp;
    
    return(i + 1);
}
