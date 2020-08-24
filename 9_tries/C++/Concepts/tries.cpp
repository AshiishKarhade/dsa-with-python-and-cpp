#include <iostream>
using namespace std;

class Node{
    public:
    char value;
    Node* childs[26];
    bool isEndofWord;
    Node(char value){
        this->value = value;
        this->isEndofWord = true;
    }
};

class Trie{
    public:
    Node* root;
    
    Trie(){
        root = new Node(' ');
    }

    void insert(char ch){
        Node n = Node(ch);

    }
};

int main(){


    return 0;
}