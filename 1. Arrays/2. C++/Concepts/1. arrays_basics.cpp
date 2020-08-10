// Declaring an array in cpp

#include <iostream>
using namespace std;

int main(){

    // 1. First way
    int arr[5];
    arr[0] = 0;
    arr[1] = 1;
    arr[2] = 2;
    cout << arr << "\n"; // prints the address of the array location
    // To print the elements of the array, we have to loop over each element and print it

    //2. Second way - much better way
    int arr2[] = {1, 2, 3, 5};

    // Accessing element
    int s = arr[2]; // prints the second element of arr
    cout << s << "\n";

    //looping through the array
    for(int i=0; i<3 ; i++){
        cout << arr[i] << " ";
    }
    cout << "\n";



    return 0;
}