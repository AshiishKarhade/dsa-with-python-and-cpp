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
    int f_size(){
        return size;
    }
    // TOP
    int peek(){
        return head->value;
    }

    int pop(){
        int last = 0;
        if (head==NULL){
            return 0;
        }
        else{
            last = peek();
            head = head->next;
            size--;
        }
        return last;
    }

    bool is_empty(){
        if(size <= 0){
            return true;
        }
        else {
            return false;
        }
    }

    void print(){
        Node* temp = head;
        while(temp != NULL){
            cout << temp->value << " ";
            temp = temp->next;
        }
        cout << "\n";
    }
};

int main(){

    Stacks st;
    st.push(5);
    st.push(10);
    st.push(15);
    st.print();
    cout << st.f_size() << "\n";
    st.pop();
    st.print();
    cout << st.f_size() << "\n";
    return 0;
}