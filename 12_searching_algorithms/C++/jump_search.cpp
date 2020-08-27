#include <iostream>
#include <vector>
using namespace std;

int jump_search(int arr[], int key,int n, int left, int right){
    
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
    int idx = jump_search(arr, 35, 8, 0, 7);
    print(idx);
    return 0;
}