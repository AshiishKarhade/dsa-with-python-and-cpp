// REVERSING A LINKED LIST

#include <iostream>
#include <string>
using namespace std;


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
    int size(){
        int count = 0;
        Node* temp = head;
        while(temp != NULL){
            temp = temp->next;
            count++;
        }
        return count;
    }

    void print(){
        Node* temp = head;
        while(temp != NULL){
            cout << temp->value << " ";
            temp = temp->next; 
        }
    }

    void reverse(){
        auto prev = head;
        auto current = head->next;

        while(current != NULL){
            auto next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }
        tail = head;
        tail->next = NULL;
        head = prev;
    }

};

int main(){

    SinglyLinkedList sll;
    sll.add_last(5);
    sll.add_last(10);
    sll.add_last(15);
    sll.add_last(20);
    sll.add_last(25);

    sll.print();
    cout << "\n";
    sll.reverse();
    sll.print();

    return 0;
}