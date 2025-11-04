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
	void search(int key);
    void traversal(int type);
	void in_order(Node* parent);
	void pre_order(Node* parent);
	void post_order(Node* parent);
	void insert(int key);
    void insert(Node* base, int key);
	void del(int key);
	void minimum();
    void maximum();
    void in_order_successor(int key);
    void in_order_predecessor(int key);
}
#endif
;
