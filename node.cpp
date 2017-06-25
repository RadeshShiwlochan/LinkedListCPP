#include <iostream>

class Node {

	private:
		int data;
		Node* next;

	public:
		Node(int);
		~Node();
		Node(const Node&); //copy constructor
		int getData();
		void setData(int data);
};

