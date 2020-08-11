// Finding the Kth node from the end

//THIS PROBLEM CAN BE SOLVED USING 2 POINTERS

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

    void print(){
        Node* temp = head;
        while(temp != NULL){
            cout << temp->value << " ";
            temp = temp->next; 
        }
    }

    int kth_node(int k){
        if(head == NULL){
            return 0;
        }
        // Using 2 pointer method to find the kth element
        // 2 pointers should be exactly (k-1) distance apart
        // eg., 1->2->3->4, k=2
        // here,*  *
        // pointers are 1 distance apart, meaning, when last pointer gets to the last element, 
        // the first pointer gives our answers
        Node* first = head;
        Node* second = head;
        for(int i=0; i<k-1; i++){
            second = second->next;
        }
        while(second->next != NULL){
            first = first->next;
            second = second->next;
        }
        int ans = first->value;
        return ans;
    }

};

int main(){

    SinglyLinkedList sll;
    sll.add_last(5);
    sll.add_last(10);
    sll.add_last(15);
    sll.add_last(20);
    sll.add_last(25);


    int ans = sll.kth_node(1);
    cout << ans << "\n";

    return 0;
}