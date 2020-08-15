#include <iostream>
using namespace std;


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

    int height(Node* root){
        if (root == NULL){
            return -1;
        }
        if (root->left == NULL && root->right==NULL){
            return 0;
        }
        return 1 + max(height(root->left), height(root->right));
    }
};

int main(){

    BST bst = BST(7);
    bst.insert(6);
    bst.insert(9);
    bst.insert(4);
    cout << bst.height(bst.root) << "\n";

    return 0;
}