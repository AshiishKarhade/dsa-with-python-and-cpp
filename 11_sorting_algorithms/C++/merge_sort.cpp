#include <iostream>
using namespace std;

void merge_sort(int arr[], int i, int j){
    // divide
    int mid = (i+j)/2;

    // conquer
    auto left = merge_sort(arr, i, mid);
    auto right = merge_sort(arr, mid+1, j);

    // merge

    return mid;
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
    merge_sort(arr, 0, 6);
    cout << "After Insertion sort: " << "\n";
    print(arr, 7);
    return 0;
}