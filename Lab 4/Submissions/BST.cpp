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
}
void BST::traversal(int type){
    if (type == 1){
        in_order(root);
    }else if (type == 2){
        pre_order(root);
    }else if (type == 3){
        post_order(root);
    }
    
    
}
void BST::in_order(Node* parent){
    if(parent == nullptr){
        return;
    }
    in_order(parent->left);
    cout << parent->data + " ";
    in_order(parent->right);
}
void BST::pre_order(Node* parent){
    if(parent == nullptr){
        return;
    }
    cout << parent->data + " ";
    pre_order(parent->left);
    pre_order(parent->right);
}
void BST::post_order(Node* parent){
    if(parent == nullptr){
        return;
    }
    post_order(parent->left);
    post_order(parent->right);
    cout << parent->data + " ";
}
void BST::preinsert(int key){// to set the first node at root
    insert(root, key);
}
void BST::insert(Node* parent, int key){
    Node* curr = parent;
    if(curr == nullptr){
        curr->data = key;
    }

    if(curr->data > key){
        insert(curr->left, key);
    }else if(curr->data < key){
        insert(curr->right, key);
    }
}
void BST::predel(int key){
    del(root, key);
}
Node* BST::del(Node* parent, int key){
    Node* curr = parent;
    
    if(curr->data > key){
        curr->left = del(curr->left, key);
    }else if(curr->data < key){
        curr->right = del(curr->right, key);
    }else if(curr->left == nullptr && curr->right == nullptr){ //if leaf node or one child
        if(curr->left == nullptr){
            Node* temp = curr->right;
            curr == nullptr;
            return temp;
        }
        if(curr->right == nullptr){
            Node* temp = curr->left;
            curr == nullptr;
            return temp;
        }
    }else if(curr->left != nullptr && curr->right != nullptr){//if two child
        Node* successor = in_order_successor(key);
        curr->data = successor->data;
        curr->right = del(successor, successor->data);
    }
}
void BST::minimum(){
    Node* curr = root;
    while(curr->left != nullptr){
        curr = curr->left;
    }
    cout << "The smallest number is " + curr->data << endl;
}
void BST::maximum(){
    Node* curr = root;
    while(curr->right != nullptr){
        curr = curr->right;
    }
    cout << "The largest number is " + curr->data << endl;
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
