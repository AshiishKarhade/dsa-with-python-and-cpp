#include <iostream>
using namespace std;

// size()
// peek() - top
// isempty()
// push()
// pop 

class Node{
    public:
    int value;
    Node* next;
    Node(int value){
        this->value = value;
        this->next = NULL;
    }
};

class Stacks{
    public:
    Node* head;
    int size;
    Stacks(){
        head = NULL;
        size = 0;
    }
    // PUSH
    void push(int val){
        Node* temp = new Node(val);
        if (head == NULL){
            head = temp;
            size++;
        }else{
            // adding new node to the front of the linkedlist
            temp->next = head;
            head = temp;
            size++;
        }
    }
    // SIZE
    int size(){
        return size;
    }

    void
};

int main(){



    return 0;
}