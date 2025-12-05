#include <iostream>
#include "BST.h"
using namespace std;

BST::BST(){
    root = nullptr;
}
Node* BST::search(int key){
    Node* curr = root;
    while (curr != nullptr) {
        if(curr->data == key){
            cout << key << endl;
            return curr;
        }else if(curr->data < key){
            curr = curr->right;
        }else if(curr->data > key){
            curr = curr->left;
        }
    }
    cout << "The Item your looking for doesn't exist" << endl;
    return nullptr;
}
void BST::traversal(int type){
    if (type == 1){
        in_order(root);
    }else if (type == 2){
        pre_order(root);
    }else if (type == 3){
        post_order(root);
    }
    cout << endl;
    
}
void BST::in_order(Node* parent){
    if(parent == nullptr){
        return;
    }
    in_order(parent->left);
    cout << parent->data << ",";
    in_order(parent->right);
}
void BST::pre_order(Node* parent){
    if(parent == nullptr){
        return;
    }
    cout << parent->data << " ";
    pre_order(parent->left);
    pre_order(parent->right);
}
void BST::post_order(Node* parent){
    if(parent == nullptr){
        return;
    }
    post_order(parent->left);
    post_order(parent->right);
    cout << parent->data << " ";
}

void BST::insert(int key){
    insert(root, key);
}
void BST::insert(Node*& base,int key){
    if(base == nullptr){
        base = new Node;
        base->left = nullptr;
        base->right = nullptr;
        base->data = key;
        return;
    }

    if(key < base->data){
        insert(base->left, key);
    }else if(key > base->data){
        insert(base->right, key);
    }
}
void BST::del(int key){
    del(root, key);
}
Node* BST::del(Node* parent, int key){
    if (parent == nullptr) {
        return nullptr;
    }

    if (key < parent->data) {
        parent->left = del(parent->left, key);

    } else if (key > parent->data) {
        parent->right = del(parent->right, key);
        
    } else {
        //only right child or no child
        if (parent->left == nullptr) {
            Node* temp = parent->right;
            delete parent;
            return temp;
        }else if (parent->right == nullptr) { //only left child
            Node* temp = parent->left;
            delete parent;
            return temp;
        }else { //two children 
            Node* succ = in_order_predecessor(key);
            parent->data = succ->data;
            parent->right = del(parent->right, succ->data);
        }
    }
    return parent;
}
void BST::minimum(){
    Node* curr = root;
    while(curr->left != nullptr){
        curr = curr->left;
    }
    cout << "The smallest number is " << curr->data << endl;
}
void BST::maximum(){
    Node* curr = root;
    while(curr->right != nullptr){
        curr = curr->right;
    }
    cout << "The largest number is " << curr->data << endl;
}
Node* BST::in_order_successor(int key){
    Node* base = search(key);
    base = base->right;
    while(base->left != nullptr){
        base = base->left;
    }
    return base;
}
Node* BST::in_order_predecessor(int key){
    Node* base = search(key);
    base = base->left;
    while(base->right != nullptr){
        base = base->right;
    }
    return base;
}
