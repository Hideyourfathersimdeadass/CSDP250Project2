
#ifndef CIRCULAR_DOUBLY_LINKED_LIST_H
#define CIRCULAR_DOUBLY_LINKED_LIST_H

class Node {
public:
    double data;
    Node* next;
    Node* prev;
    Node(double value);
};

class CircularDoublyLinkedList {
public:
    CircularDoublyLinkedList();
    ~CircularDoublyLinkedList();
    void insert(double value);
    void print();
    void printForward();
    void printBackward();

private:
    Node* head;
};

#endif
