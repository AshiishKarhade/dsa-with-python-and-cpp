#include <iostream>
using namespace std;

// add last
// add first
// remove first
// remove last
// size()

//PROBLEMS
// converting linked list to arrays
// reversing linked list
// kth node from end

class Node{
    public:
    int value;
    Node* next;
};

class SinglyLinkedList{
    Node* head;
    Node* tail;
    public:
    SinglyLinkedList(){
        head = NULL;
        tail = NULL;
    }

    void add_last(int value){
        Node* temp = new Node();
        temp->value = value;
        temp->next = NULL;

        if(head==NULL){
            head = temp;
            tail = temp;
        }
        else{
            tail->next = temp;
            tail = tail->next;
        }
    }

    void print(){
        Node* temp = head;
        while(temp != NULL){
            cout << temp->value << " ";
            temp = temp->next; 
        }
    }

    void add_first(int value){
        Node* temp = new Node();
        temp->value = value;
        temp->next = NULL;

        if(head==NULL){
            head = temp;
            tail = temp;
        }
        else{
            temp->next = head;
            head = temp;
        }
    }
};

int main(){

    SinglyLinkedList sll;
    sll.add_last(10);
    sll.add_last(15);
    sll.add_first(5);

    sll.print();

    return 0;
}