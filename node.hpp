#ifndef NODE_H
#define NODE_H


class Node {

	public:
		int data;
		Node* next;
		Node* previous;

		Node(int);
		~Node();
		//Node(const Node* &); //copy constructor
		void printNode();
		int getData();
		Node* getNext();
		Node* getPrevious();
		void setData(int);
		void setNext(Node* &);
		void setPrevious(Node* &);
};

#endif