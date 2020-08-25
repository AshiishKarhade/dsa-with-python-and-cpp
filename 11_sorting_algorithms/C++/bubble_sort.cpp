#include <iostream>
using namespace std;

void bubble_sort(int arr[], int n){
    for(int i=0; i<n; i++){
        for(int j=1; j<n; j++){
            if(arr[j-1] > arr[j]){
                swap(arr[j-1], arr[j]);
            }
        }
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
    bubble_sort(arr, 7);
    cout << "After Bubble sort: " << "\n";
    print(arr, 7);
    return 0;
}