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

    void insert(string word){
        Node* current = root;
        for(int i=0; i<word.length(); i++){
            char ch = word[i];
            int idx = ch - 'a';
            //cout << idx << endl;
            if(current->childs[idx] == NULL){
                current->childs[idx] = new Node(ch);
            }
            current = current->childs[idx];
        }
        current->isEndofWord = true;
    }
};

int main(){

    Trie trie;
    trie.insert("ashish");

    return 0;
}