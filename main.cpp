#include <iostream>
#include "node.hpp"
#include "linkedList.hpp"

int main(int argc, char* argv[]) {
	LinkedList linkedList;
	Node* node1 = new Node(1);
	Node* node2 = new Node(2);
	Node* node3 = new Node(3);
	linkedList.append(node1);
	linkedList.append(node2);
	linkedList.prepend(node3);
	Node* nodeAtOne = linkedList.popBack();
	linkedList.print();
	nodeAtOne->printNode();
	
	// delete node1;
	// delete node2;
	// delete node3;

	return 0;
}