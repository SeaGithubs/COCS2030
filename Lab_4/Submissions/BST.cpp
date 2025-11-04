#include <iostream>
#include "BST.h"
using namespace std;

BST::BST(){
    root = nullptr;
}
void BST::search(int key){
    Node* curr = root;
    while (curr != nullptr) {
        if(curr->data == key){
            cout << key << endl;
            return;
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
void BST::insert(int key){
    insert(root, key);
}
void BST::insert(Node* base,int key){
    Node* curr = base;
    if(curr == nullptr){
        curr->data = key;
    }

    if(curr->data > key){
        insert(curr->left, key);
    }else if(curr->data < key){
        insert(curr->right, key);
    }
}

void BST::del(int key){
    Node* curr = root;
    while (curr != nullptr) {
        if(curr->data == key){
            break;
        }else if(curr->data < key){
            curr = curr->right;
        }else if(curr->data > key){
            curr = curr->left;
        }
    }
    if(curr == nullptr){
        cout << "The Item your looking for doesn't exist" << endl;
        return;
    }
    
    //if leaf node or one child
    if(curr->left == nullptr && curr->right == nullptr){ 
        curr = nullptr;
        return;
    }
    if(curr->left == nullptr){
        curr = curr->right;
        return;
    }
    if(curr->right == nullptr){
        curr == curr->left;
        curr->left = nullptr;       return;
    }
    if(curr->left != nullptr && curr->right != nullptr){//if two child
        Node* successor = curr->right;
        while(curr->left != nullptr){
            successor = successor->left;
        }
        curr->data = successor->data;
        del(successor->data);
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
void BST::in_order_successor(int key){
    Node* curr = root;
    while (curr != nullptr) {
        if(curr->data == key){
            break;
        }else if(curr->data < key){
            curr = curr->right;
        }else if(curr->data > key){
            curr = curr->left;
        }
    }
    if(curr == nullptr){
        cout << "The Item your looking for doesn't exist" << endl;
        return;
    }
    Node* base = curr;
    base = base->right;
    while(base->left != nullptr){
        base = base->left;
    }
    return;
}
void BST::in_order_predecessor(int key){
    Node* curr = root;
    while (curr != nullptr) {
        if(curr->data == key){
            break;
        }else if(curr->data < key){
            curr = curr->right;
        }else if(curr->data > key){
            curr = curr->left;
        }
    }
    if(curr == nullptr){
        cout << "The Item your looking for doesn't exist" << endl;
        return;
    }
    Node* base = curr;
    while(base->right != nullptr){
        base = base->right;
    }
    return;
}
