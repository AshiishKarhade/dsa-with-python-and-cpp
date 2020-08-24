#include <iostream>
#include <map>
using namespace std;

class Node{
    public:
    char value;
    map<char, Node*> children;
    bool isEndofWord;
    Node(char value){
        this->value = value;
        this->isEndofWord = false;
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
            //int idx = ch - 'a';
            //cout << idx << endl;
            if(current->children.find(ch) == current->children.end()){
                current->children[ch] = new Node(ch);
            }
            current = current->children[ch];
        }
        current->isEndofWord = true;
    }

};

int main(){

    Trie trie;
    trie.insert("ashish");

    return 0;
}