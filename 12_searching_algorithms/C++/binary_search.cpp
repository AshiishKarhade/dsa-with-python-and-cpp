#include <iostream>
#include <vector>
using namespace std;

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
    int idx = binary_search(arr, 35, 0, 7);
    print(idx);
    return 0;
}