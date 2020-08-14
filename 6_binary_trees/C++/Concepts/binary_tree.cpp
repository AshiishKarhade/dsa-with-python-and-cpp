#include <iostream>
using namespace std;

// THIS IS BINARY SEARCH TREE

// insertion
// find
// delete
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

class BST{
    public:
    Node* root;
    BST(int root_val){
        root = new Node(root_val);
    }

    void insert(int val){
        Node* newnode = new Node(val);
        if(root == NULL){
            root = newnode;
            return;
        }
        Node* current = root;
        while(true){
            if (val < current->data){
                if(current->left == NULL){
                    current->left = newnode;
                    break;
                }
                current = current->left;
            }
            else{
                if(current->right == NULL){
                    current->right = newnode;
                    break;
                }
                current = current->right;
            }
        }
    }

    bool find(int val){
        Node* current = root;
        while(current != NULL){
            if (val < current->data){
                current = current->left;
            }
            else if(val > current->data){
                current = current->right;
            }
            else{
                return true;
            }
        }
        return false;
    }
};

int main(){

    BST bst = BST(7);
    bst.insert(6);
    bst.insert(9);
    bst.insert(4);

    cout << bst.find(9) << "\n";

    return 0;
}