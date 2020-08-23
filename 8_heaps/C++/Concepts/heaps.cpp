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
    void remove(){
        if (size==0){
            cout << "Heap Empty" << "\n";
            return;
        }
        // removes the root node and does the adjustments
        items[0] = items[--size];
        // item(root) < childer
        int idx = 0;
        while(idx <= size && !isValid_parent(idx)){
            int left = left_child(idx);
            int right = right_child(idx);
            int larger_child_idx = (left > right) ? left : right;  
        }
    }
    bool isValid_parent(int index){
        return items[index] >= items[left_child(index)] && items[index] >= items[right_child(index)]
    }
    int left_child(int index){
        return (index*2)+1;
    }
    int right_child(int index){
        return (index*2)+2;
    }
};

int main(){

    Heap hp;
    hp.insert(10);
    hp.insert(15);
    hp.insert(30);
    hp.insert(20);
    hp.insert(25);



    return 0;
}