#include <iostream>
#include <vector>
using namespace std;

int binary_sort(){

}

int main(){
    vector <int> arr;
    arr.push_back(24);
    arr.push_back(34);
    arr.push_back(12);
    arr.push_back(65);
    arr.push_back(83);
    arr.push_back(27);
    arr.push_back(67);
    arr.push_back(02);
    int index = linear_search(arr, 12);
    print(index);

    int index2 = linear_search(arr, 1222);
    print(index2);
    return 0;

    return 0;
}