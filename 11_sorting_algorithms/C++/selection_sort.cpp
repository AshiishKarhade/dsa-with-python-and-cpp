#include <iostream>
using namespace std;

void selection_sort(int arr[], int n){

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
    cout << "After Bubble sort: " << "\n";
    print(arr, 7);
    return 0;
}