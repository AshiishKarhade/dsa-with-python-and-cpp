#include <iostream>
#include <vector>
using namespace std;

//put(k,v)
// get(k)->v
// remove(k)

// Collisions are handled using Chaining technique

// Array of Linked Lists is required in our case

class Node{
    public:
        int key;
        string value;
        Node* next;

    Node(int k, string s){
        this->key = k;
        this->value = s;
        this->next = NULL;
    }
};

class HashTable{
    public:
    vector <Node> table;

    int hash_func(int key){
        return 0;
    }
 
    void push(int key, string value){
        Node temp = Node(key, value);
        int idx = hash_func(key);
        table[idx] = temp;
    }

    void remove(int key){

    }

    void get(int key){
        int idx = hash_func(key);
        int v = table[idx];
        cout << v << "\n";
    }
};


int main(){
    vector<Node> v;
    Node n1 =  Node(1, "ashish");
    v.push_back(n1);
    return 0;
}