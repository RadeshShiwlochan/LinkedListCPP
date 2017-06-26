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
	head->next = tail;
	tail->previous = head;
}

// LinkedList::~LinkedList() {
// 	Node* current = head;
// 	Node* temp = head;
// 	while( current != nullptr ) {
// 		temp = current;
// 		current = current->next;
// 		delete temp;
// 	}
// 	head = nullptr;
// }

// LinkedList::LinkedList(const LinkedList& linkedList) {

// 	// Node* temp = linkedList.head; // to traverse the list
// 	// Node* newHead = new Node(0);
// 	// Node* newTail = new Node(0);
// 	// newHead = linkedList.head;
//  //    for(int i = 0; i < size; ++i) {
//  //    	Node* addNode = new Node(temp->getData());
//  //    	temp = temp->getNext();
//  //    }
// }

int LinkedList::getSize() { return size; }

bool LinkedList::isEmpty() { return size == 0; }

void LinkedList::print() { 
	Node* temp = head;
	while(temp != nullptr) {
		std::cout << temp->getData() << " ";
		temp = temp->next;
	}
}

void LinkedList::insert(int atPosition, Node* node) {

}

void LinkedList::prepend(Node* node) {
	node->next = head->next;
	head->next = node;
	node->previous = head;
}

void LinkedList::append(Node* node) {
	tail->next = node;
	node->previous = tail;
	tail = node;
	size++;
}

Node* LinkedList::getElementAtIndx(int position) {
	if(head->next == nullptr) {
		exit(1);
	}
	Node* temp = head->next;
	int counter = 0;
	while(temp->next != nullptr && counter < position ) {
		temp = temp->next;
		counter++;
	}
	return temp; 
}

Node* LinkedList::front() {
	if(head->next == nullptr)
		exit(-1);
	Node* front = head->next;
	return front;
}

Node* LinkedList::back() {
	if(tail == head)
		exit(1);
	return tail;
}

int LinkedList::search(Node* searchElem) {

	Node* temp = head->next;
	int counter = 0, dataInSearchElem = searchElem->getData();
	while(temp != nullptr) {
		if(temp->getData() == dataInSearchElem) {
			return counter;
		}
		counter++;
		temp = temp->next;
	}
	return -9999;
}
































