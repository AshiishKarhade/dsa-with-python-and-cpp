#include <iostream>
using namespace std;

void selection_sort(int arr[], int n){
    for(int i=0; i<n; i++){
        int min_idx = i;
        for(int j=i+1; j<n; j++){
            if(arr[j] < arr[min_idx]){
                min_idx = j;
            }   
        }
        swap(arr[i], arr[min_idx]);
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
    selection_sort(arr, 7);
    cout << "After Selection sort: " << "\n";
    print(arr, 7);
    return 0;
}