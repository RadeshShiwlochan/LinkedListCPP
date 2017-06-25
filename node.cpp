#include <iostream>
#include "node.hpp"

Node::Node(int nodeData) {
	data     = nodeData;
	next     = nullptr; 
	previous = nullptr;
}

Node::~Node() {
	delete next;
	delete previous;
}

// Node::Node(const Node* &node2) {
// 	data     = node2->data;
// 	next     = node2->next;
// 	previous = node2->previous;
// }

void Node::printNode() {
	std::cout << data << "\n";
}

int Node::getData() { return data; }

Node* Node::getNext() { return next; }

Node* Node::getPrevious() { return previous; }

void Node::setData(int nodeData) { data = nodeData; }

void Node::setNext(Node* &node2) { next = node2->next; }

void Node::setPrevious(Node* &node2) { node2 = node2->previous; }


