#include <iostream>
#include <vector>
using namespace std;

int ternary_search(){

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
    int idx = ternary_search(arr, 35);
    print(idx);
    return 0;
}