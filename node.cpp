#include <iostream>

class Node {

	private:
		int data;
		Node* next;
		Node* previous;

	public:
		Node(int);
		~Node();
		Node(const Node* &); //copy constructor
		int getData();
		void setData(int);
		void setNext(Node* &);
		void setPrevious(Node* &);
};

Node::Node(int nodeData) {
	data     = nodeData;
	next     = nullptr; 
	previous = nullptr;
}

Node::~Node() {
	delete next;
	delete previous;
}

Node::Node(const Node* &node2) {
	data     = node2->data;
	next     = node2->next;
	previous = node2->previous;
}

int Node::getData() { return data; }

void Node::setData(int nodeData) { data = nodeData; }

void Node::setNext(Node* &node2) { next = node2->next; }

void Node::setPrevious(Node* &node2) { node2 = node2->previous; }


