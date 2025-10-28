#ifndef __BST_H__
#define __BST_H__

class Node {
public:
	int data;
	Node* left;
    Node* right;	
};

class BST {
private:
	Node* root;

public:
	BST();
	Node* search(int key);
    void traversal(int type);
	void in_order(Node* parent);
	void pre_order(Node* parent);
	void post_order(Node* parent);
	void preinsert(int key);
    void insert(Node* parent, int key);
	void predel(int key);
	Node* del(Node* parent, int key);
	void minimum();
    void maximum();
    Node* in_order_successor(int key);
    Node* in_order_predecessor(int key);
}
#endif
;
