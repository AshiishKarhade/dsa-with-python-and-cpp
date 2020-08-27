#include <iostream>
#include <vector>
using namespace std;

int ternary_search(int arr[], int key,int n, int left, int right){
    int partition_size = n/3;
    int mid1 = left + partition_size;
    int mid2 = right - partition_size;
    
    if(right < left){
        return -1;
    }

    if(arr[mid1] == key){
        return mid1;
    }
    if(arr[mid2] == key){
        return mid2;
    }

    if(key < arr[mid1]){
        return ternary_search(arr, key, n, left, mid1-1);
    }
    else if(key > arr[mid2]){
        return ternary_search(arr, key, n, mid2+1, right);
    }
    else{
        return ternary_search(arr, key, n, mid1+1, mid2-1);
    }
}

void print(int index){
    if(index<0){
        cout << "Key is not present" << "\n";
    }
    else{
        cout << "Key is present at: " << index << "\n";
    }
}

int main(){
    int arr[] = {12, 23, 35, 46, 57, 69, 82, 92};
    int idx = ternary_search(arr, 35, 8, 0, 7);
    print(idx);
    return 0;
}