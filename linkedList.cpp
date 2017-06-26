#include <iostream>
#include "linkedList.hpp"
#include "node.hpp"

LinkedList::LinkedList() {
	//create a node for head. set tail to head
	head = new Node(0);
	tail = head;
	size = 0; 
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
	Node* temp = head->next;
	while(temp != nullptr) {
		std::cout << temp->getData() << " ";
		temp = temp->next;
	}
}

void LinkedList::insert(int insertPosition, Node* node) {
	if(insertPosition > size) {
		std::cout << "position given is out of bounds!!\n";
		return;
	}
	Node* temp = head->next;
	int counter = 0;
	while(temp != nullptr && counter < (insertPosition - 1)) {
		counter++;
		temp = temp->next;
	}
	node->next = temp->next;
	temp->next = node;
	node->previous = temp;
	size++;
}

void LinkedList::prepend(Node* node) {
	node->next = head->next;
	head->next = node;
	node->previous = head;
	size++;
}

void LinkedList::append(Node* node) {
	tail->next = node;
	node->previous = tail;
	tail = node;
	size++;
}

Node* LinkedList::getElementAtIndx(int position) {
	if(head->next == nullptr) 
		exit(1);
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
		exit(1);
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
		if(temp->getData() == dataInSearchElem) 
			return counter;
		counter++;
		temp = temp->next;
	}
	return -9999;
}

void LinkedList::remove(int posOfElemToRemove) {
	//set tail here
	//call delete
	Node* temp = head->next;
	int counter = 0;
	if(posOfElemToRemove > size) {
		std::cout << "position out of bounds!\n";
		return;
	}
	while(temp != nullptr && counter < (posOfElemToRemove - 1)) {
		temp = temp->next;
		counter++;
	}
	//check if element to remove is at the end
	Node* prevNode = temp->previous;
	Node* nodeToDelete = temp;
	if(temp->next->next == nullptr) {
		temp->next = nullptr;
		return;
	}
	//temp->next is not null, set prevNode to point to what temp is pointing to
	Node* nodeAfterTemp = temp->next;
	prevNode->next = nodeAfterTemp;
	nodeAfterTemp->previous = prevNode;
}

Node* LinkedList::popFront() {
	//check if list is empty
	if(head->next == nullptr)
		exit(1);
	//get element in front of list
	Node* front = head->next;
	//checks if there is one element on the list
	if(head->next->next == nullptr) {
		tail = head;
		size = 0;
		return front;
	}
	//there are at least two elements in the list
	Node* nodeAfterFront = head->next->next;
	head->next = nodeAfterFront;
	nodeAfterFront->previous = head;
	size--;
	return front;
}

Node* LinkedList::popBack() {
	//check if list is empty
    if(head->next == nullptr) 
    	exit(1);
    //get element at the back
    Node* lastNode = tail;
    //checks if there is one element on the list
    if(head->next->next == nullptr) {
    	tail = head;
    	size = 0;
    	return lastNode;
    }
    //at least two elements on the list
    Node* nodeBeforeTail = tail->previous;
    tail = nodeBeforeTail;
    nodeBeforeTail->previous = nodeBeforeTail->previous;
    size--;
    return lastNode;
}
