#include <iostream>
using namespace std;

void insertion_sort(int arr[], int n){
    for(int i=0; i<n; i++){
        int current = arr[i];

        int j = i-1;
        while(j>=0 && arr[j]>current){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = current;
    }
}

void print(int arr[], int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << "\n";
}

int main(){
    int arr[] = {4, 1, 2, 7, 5, 9, 3};
    print(arr, 7);
    insertion_sort(arr, 7);
    cout << "After Insertion sort: " << "\n";
    print(arr, 7);
    return 0;
}