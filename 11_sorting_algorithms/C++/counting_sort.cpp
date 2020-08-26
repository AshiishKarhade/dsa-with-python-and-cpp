// Non-comparison sorting algorithm

#include <iostream>
using namespace std;

void counting_sort(int arr[], int max){ // max is the maximum value present in the array
    int n = sizeof(arr)/sizeof(arr[0]);
    int counts[max+1];
    for(int i=0; i<n; i++){
        counts[arr[i]] += 1;
    }
    //print(counts, max+1);
    int k=0;
    for(int i=0; i<max+1; i++){
        for(int j=0; j < counts[i]; j++){
            arr[k++] = i;
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
    counting_sort(arr, 9);
    cout << "After Counting sort sort: " << "\n";
    print(arr, 7);
    return 0;
}