#include <iostream>
using namespace std;

void merge_sort(int arr[], int n){
    // BASE CONDITION
    if (n < 2){
        return;
    }
    // divide
    int mid = n/2;
    int left[mid];
    int right[n-mid];

    for(int i=0; i<mid; i++){
        left[i] = arr[i];
    }
    for(int i=mid; i<n; i++){
        right[i-mid] = arr[i];
    }
    // conquer
    merge_sort(left, mid);
    merge_sort(right, n-mid);

    // merge
    int i=0, j=0, k=0;
    while(i < sizeof(left)/sizeof(left[0]) && j<sizeof(right)/sizeof(right[0])){
        if(left[i] <= right[j]){
            arr[k] = left[i];
            k++;
            i++;
        }
        else{
            arr[k] = right[j];
            k++;
            j++;
        }
    }
    while(i<sizeof(left)/sizeof(left[0])){
        arr[k++] = left[i++];
    }
    while(j<sizeof(right)/sizeof(right[0])){
        arr[k++] = right[j++];
    }
}

// IMPORTANT MERGING STEP
void merge_arr(int left[], int right[], int result[]){
    int i=0, j=0, k=0;
    while(i < sizeof(left)/sizeof(left[0]) && j<sizeof(right)/sizeof(right[0])){
        if(left[i] <= right[j]){
            result[k] = left[i];
            k++;
            i++;
        }
        else{
            result[k] = right[j];
            k++;
            j++;
        }
    }
    while(i<sizeof(left)/sizeof(left[0])){
        result[k++] = left[i++];
    }
    while(j<sizeof(right)/sizeof(right[0])){
        result[k++] = right[j++];
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
    merge_sort(arr, 7);
    cout << "After Insertion sort: " << "\n";
    print(arr, 7);
    return 0;
}