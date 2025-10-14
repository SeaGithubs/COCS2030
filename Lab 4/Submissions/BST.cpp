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
            break;
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
        
    }else if (type == 2){
        
    }else if (type == 3){
        
    }
    
    
}
void BST::in_order(Node* parent){
    if(parent->left != nullptr){
        in_order(parent->left);
    }
    if(parent->right != nullptr){
        in_order(parent->right);
    }
    cout << parent->data + " ";
}
void BST::insert(int key){

}
void BST::del(int key){

}
void BST::minimum(){

}
void BST::maximum(){

}
void BST::in_order_successor(int key){

}
void BST::in_order_predecessor(int key){

}
BST::~BST(){
    
}