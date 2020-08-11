#include <iostream>
#include <string>
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

    int size(){
        int count = 0;
        Node* temp = head;
        while(temp != NULL){
            temp = temp->next;
            count++;
        }
        return count;
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

    void remove_first(){
        if (head == NULL){
            return;
        }
        else{
            head = head->next;
        }
    }

    void remove_last(){
        if(head==NULL){
            return;
        }
        else{
            if(tail==head){
                remove_first();
            }
            else{
                Node* temp = head;
                while(temp->next->next != NULL){
                    temp = temp->next;
                }
                tail = temp;
                tail->next = NULL;
            }
        }
    }
};

int main(){

    SinglyLinkedList sll;
    sll.add_last(10);
    sll.add_last(15);
    sll.add_first(5);
    sll.add_last(20);
    sll.add_last(25);

    sll.print();
    cout << "\nSize: " + to_string(sll.size()) << "\n";
    cout << "\n";
    sll.remove_last();
    sll.print();
    cout << "\nSize: " + to_string(sll.size()) << "\n";

    return 0;
}