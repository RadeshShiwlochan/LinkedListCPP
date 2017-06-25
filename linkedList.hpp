#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include "node.hpp"

class LinkedList {

    public:
        Node* head;
        Node* tail;
        int size;

    /*
    size() -- Return the number of elements.
    empty() -- Check whether the container is empty.
    print() -- Print the entire container.
    insert(index, element) -- Insert element at the position index.
    prepend(element) -- Insert the element at the front.
    append(element) -- Insert the element at the end.
    get(index) -- Return the element at position index (if within bounds).
    front() -- Return the element at the front (if there is one).
    back() -- Return the element at the end (if there is one).
    search(element) -- Return the position of element (if found).
    remove(index) -- Remove the element at position index (if within bounds).
    popfront() -- Remove the element at the front (if there is one).
    popback() -- Remove the element at the end (if there is one).   
    */

        LinkedList();
        //~LinkedList(); //destructor
        //LinkedList(const LinkedList& linkedList);
        int getSize();
        bool isEmpty();
        void print();
        void insert(int, Node*);
        void prepend(Node*);
        void append(Node*);
        Node* getElementAtIndx(int);
        Node* getNode(int);
        Node* front();
        Node* back();
        int search(Node*);
        void remove(int);
        void popFront();
        void popBack();

};
#endif
