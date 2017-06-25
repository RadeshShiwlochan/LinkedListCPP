#ifndef NODE_H
#define NODE_H


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
		Node* getNext();
		Node* getPrevious();
		void setData(int);
		void setNext(Node* &);
		void setPrevious(Node* &);
};

#endif