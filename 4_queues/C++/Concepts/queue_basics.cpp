#include <iostream>
using namespace std;

class Node {
    public:
    int value;
    Node* next;
    Node(int value){
        this->value = value;
        this->next = NULL;
    }
};

class Queue{
    // INSERTING FROM TAIL
    // EXITING FROM FRONT
    public:
        Node* front;
        Node* tail;
        int size;
    Queue(){
        size = 0;
        front = NULL;
        tail = NULL;
    }

    void push(int value){
        Node* temp = new Node(value);
        // this will add the new node to the end of the Linked list
        if(front == NULL){
            front = temp;
            tail = temp;
            size = 1;
        }
        else{
            tail->next = temp;
            tail = tail->next;
            size++;
        }
    }

    void pop(){
        // this should remove the element from the back
        if(front==NULL){
            return;
        }
        else{
            front = front->next;
            size--;
        }
    }

    int get_size(){
        return size;
    }

    bool is_empty(){
        if (size<=0){
            return true;
        }else{
            return false;
        }
    }

    int get_front(){
        return front->value;
    }
    
    void print(){
        Node* temp = front;
        while(temp!=NULL){
            cout << temp->value << " ";
            temp = temp->next;
        }
        cout << "\n";
    }

};

int main(){
    Queue q;
    q.push(5);
    q.push(10);
    q.push(15);
    q.push(20);

    q.print();
    cout << q.get_size() << "\n";
    q.pop();
    q.print();
    cout << q.get_front() << "\n";
    return 0;
}