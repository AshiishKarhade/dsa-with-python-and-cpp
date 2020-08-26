#include <iostream>
#include <list>
using namespace std;

void bucket_sort(int arr[], int n, int buckets){
    list <list<int>> buckets;  
    for(int i=0; i<n; i++){
        // this function is not yet complete
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
    bucket_sort(arr, 7);
    cout << "After Bubble sort: " << "\n";
    print(arr, 7);
    return 0;
}