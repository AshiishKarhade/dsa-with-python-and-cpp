#include <iostream>
using namespace std;

void quick_sort(int arr[], int start, int end){
    int n = sizeof(arr)/sizeof(arr[0]);
    // BASE CASE
    if(start >= end){
        return;
    }

    int boundary = partition(arr, start, end);
    //sort left
    quick_sort(arr, start, boundary-1);
    quick_sort(arr, boundary+1, end);

}

int partition(int arr[], int start, int end){
    int n = sizeof(arr)/sizeof(arr[0]);
    int pivot = arr[end]; // pivot element
    int boundary = start-1; //last index of left subarray //initialliy -1
    for(int i=start; i<=end; i++){
        if(arr[i] <= pivot){
            swap(arr[i], arr[++boundary]);
        }
    }
    return boundary;
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
    quick_sort(arr, 0, 6);
    cout << "After Quick sort: " << "\n";
    print(arr, 7);
    return 0;
}