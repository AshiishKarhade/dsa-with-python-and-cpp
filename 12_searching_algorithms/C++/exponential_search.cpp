#include <iostream>
#include <cmath>
using namespace std;

int exponential_search(int arr[], int key, int n){
    int bound = 1;
    while(bound < n && arr[bound] < key){
        bound *= 2;
    }
    int left = bound/2;
    int right = min(bound, n-1);

    return binary_search(arr, key, left, right);
}

int binary_search(int arr[], int key, int left, int right){
    int mid = (left+right)/2;
    
    if(right <= left){
        return -1;
    }

    if(arr[mid] == key){
        return mid;
    }

    if(key < arr[mid]){
        return binary_search(arr, key, left, mid);
    }
    else{
        return binary_search(arr, key, mid+1, right);
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
    int idx = exponential_search(arr, 35, 8);
    print(idx);
    return 0;
}