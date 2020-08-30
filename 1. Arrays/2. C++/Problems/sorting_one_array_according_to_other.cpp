/*
I/P = a['a', 'b', 'c'] , b[2,3,1]
O/P = c a b
*/

#include <iostream>
#include <algorithm>
using namespace std;

void sort_pairs(int arr[], char char_arr[], int n){
  pair<int, char> sorting_arr[n];

  for(int i=0; i<n; i++){
    sorting_arr[i] = {arr[i], char_arr[i]};
    //sorting_arr[i] = make_pair(arr[i], char_arr[i]);
  }
  sort(sorting_arr, sorting_arr+n);

  for(int i=0; i<n; i++){
    cout << sorting_arr[i].second << " ";
  }
}

int main() {
  char char_arr[] = {'a', 'b', 'c'};
  int arr[] = {2, 3, 1};
  sort_pairs(arr, char_arr, 3);
}