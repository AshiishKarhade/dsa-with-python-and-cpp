#include <iostream>
#include <cmath>
using namespace std;

int jump_search(int arr[], int key, int n){
    int block_size = sqrt(n);
    int start = 0;
    int next = block_size;

    while(arr[next-1] < key){
        start = next;
        if(start >= n){
            break;
        }
        next = next + block_size;
        if(next > n){
            next = n;
        }
    }
    for(int i=0; i< next; i++){
        if(arr[i] == key){
            return i;
        }
    }
    return -1;
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
    int idx = jump_search(arr, 35, 8);
    print(idx);
    return 0;
}