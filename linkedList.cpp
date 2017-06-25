#include <iostream>
#include "linkedList.hpp"
#include "node.hpp"

LinkedList::LinkedList() {
	//create a node for head and tail of list
	head = new Node(0);
	tail = new Node(0);
	size = 0; //size is zero

	/**
		set the pointers: head's next to tail and
		tail's previous to head
	*/
	head->setNext(tail);
	tail->setPrevious(head);
}

// LinkedList::~LinkedList() {

// }

int LinkedList::getSize() { return size; }

bool LinkedList::isEmpty() { return size == 0; }

void LinkedList::print() { 
	Node* temp = head;
	// while(temp->getNext() != nullptr) {
	// 	std::cout << temp->getData() << " ";
	// 	//temp = temp->getNext();
	// }
}
































