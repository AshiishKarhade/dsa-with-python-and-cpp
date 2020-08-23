#include <iostream>
using namespace std;


// We use arrays instead of Linked Lists to implement heaps
// left_child = parent_idx * 2 + 1
// right_child = parent_idx * 2 + 2
// parent = (index-1)/2


class Heap{
    // int[]
    public:
    int items[100];
    int size;
    //insert
    void insert(int value){
        items[size] = value;
        size++;
        bubble_up();
    }

    void bubble_up(){
        int idx = size-1; // because we incremented the size variable by 1
        while(idx>0 && items[idx] > parent(idx)){
            swap(idx, parent(idx));
            idx = parent(idx);
        }
    }

    int parent(int index){
        return (index-1)/2;
    }

    void swap(int first, int second){
        int temp = items[first];
        items[first] = items[second];
        items[second] = temp;
    }
    //remove() root node
};

int main(){

    Heap hp;
    hp.insert(10);
    hp.insert(15);
    hp.insert(20);
    hp.insert(25);
    hp.insert(30);


    return 0;
}