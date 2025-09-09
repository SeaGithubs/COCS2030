#include <iostream>
using namespace std;

int binary_search(int A[], int b, int c);

int main(){
    int target;
    int size = 20;
    int list[20];
    for (int i = 0; i < 21; i++){
        list[i] = i+1;
    }
    
    cin >> target;

}

int binary_search(int A[], int high, int low, int d){
    if (high >= low) {
        int mid = low + (high - low) / 2;
        if (A[mid] == d)
            return mid;

        // If element is smaller than mid, then
        // it can only be present in left subarray
        if (A[mid] > d)
            return binary_search(A, low, mid - 1, d);

        // Else the element can only be present
        // in right subarray
        return binary_search(A, mid + 1, high, d);
    }
  return -1;
}