#include <iostream>
#include <cmath>
using namespace std;

void heapSort(int A[], int n);
void percolateUp(int A[], int i, int s);
void percolateDown(int A[], int i, int s);
void insert(int A[], int i, int s);
int getMax(int A[]);
void deleteMax(int A[], int s);



int main(){
    int heap[50];
    int size = 0;
    int input = -1;

    while (input != 5){
        cout << "______________________" << endl;
        cout << "Heap: "; //print heap
        for (int i = 0; i < size; i++){
            cout << heap[i] << ", ";
        }
        cout << endl;
        cout << "1) Insert" << endl;
        cout << "2) Get Max" << endl;
        cout << "3) Delete the Max" << endl;
        cout << "4) Heapsort" << endl;
        cout << "5) Quit" << endl;
        cout << "______________________" << endl;
        cin >> input;

        if(input == 1){
            int number;
            cout << "Enter the number you are inserting: ";
            cin >> number;
            size++;
            insert(heap, number, size);

        }else if(input == 2){
            cout << "The maximum is " << getMax(heap) << endl;

        }else if(input == 3){
            cout << "Deleting Maximum" << endl;
            size--;
            deleteMax(heap, size);

        }else if(input == 4){
            cout << "Heapsort" << endl;
            heapSort(heap, size);
        }

    }
}

void heapSort(int A[], int s){ //sort the heap lowest to highest (Array, size)
    int temp;
    int n = s;
    int sortedHeap[s];

    for(int i = 0; i < s; i++){
        sortedHeap[i] = A[i];
    }

    percolateDown(sortedHeap, n, s);
    for (int i = n-1; i >= 1; i--){
        temp = sortedHeap[0];
        sortedHeap[0] = sortedHeap[i];
        sortedHeap[i] = temp;
        s = s - 1;
        percolateDown(sortedHeap, 0, s);
    }
    cout << " sorted Heap: "; //print heap
        for (int i = 0; i < n; i++){
            cout << sortedHeap[i] << ", ";
        }
    cout << endl;
}

void percolateUp(int A[], int i, int s){//sort up the heap (Array, heap positon, size)
    int up = (i - 1)/2;
    int smallest;
    int temp;

    if (i > 0 && A[up] < A[i]){
        smallest = up;
    }else{
        smallest = i;
    }

    if (smallest != i){
        temp = A[smallest];
        A[smallest] = A[i];
        A[i] = temp;
        percolateUp(A, smallest, s);
    }
}

void percolateDown(int A[], int i, int s){ //sort down the heap (Array, heap positon, size)
    int l = 2 * i + 1;
    int r = 2 * i + 2;
    int largest;
    int temp;

    if (l < s && A[l] > A[i]){
        largest = l;
    }else{
        largest = i;
    }

    if (r < s && A[r] > A[largest]){
        largest = r;
    }

    if (largest != i && s > 0){
        temp = A[largest];
        A[largest] = A[i];
        A[i] = temp;
        percolateDown(A, largest, s);
    }
}

void insert(int A[], int i, int s){ //insert (Array, key, size)
    int x = s - 1;
    A[x] = i;
    int height = floor(log2(s));
    for (int j = 0; j <= height; j++){
        percolateUp(A, x, s);
    }
}

int getMax(int A[]){ //get max (Array)
    return A[0];
}

void deleteMax(int A[], int s){ //delete max (Array, size)
    A[0] = A[s];
    s--;
    int height = floor(log2(s));
    for (int j = 0; j <= height; j++){
        percolateDown(A, 0, s);
    }
}

