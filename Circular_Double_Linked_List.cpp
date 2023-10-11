
#include "Circular_doubly_linked_list.h"
#include <iostream>

Node::Node(double value) {
    data = value;
    next = nullptr;
    prev = nullptr;
}

CircularDoublyLinkedList::CircularDoublyLinkedList() {
    head = nullptr;
}

CircularDoublyLinkedList::~CircularDoublyLinkedList() {
    while (head != nullptr) {
        Node* temp = head->next;
        delete head;
        head = temp;
        if (head == head->next) {
            head = nullptr;
        }
    }
}

void CircularDoublyLinkedList::insert(double value) {
    Node* newNode = new Node(value);
    if (head == nullptr) {
        head = newNode;
        head->next = head;
        head->prev = head;
    }
    else {
        Node* last = head->prev;
        last->next = newNode;
        newNode->prev = last;
        newNode->next = head;
        head->prev = newNode;
    }
}

void CircularDoublyLinkedList::print() {
    Node* current = head;
    if (current == nullptr) {
        std::cout << "List is empty." << std::endl;
        return;
    }
    printForward();
}

void CircularDoublyLinkedList::printForward() {
    Node* current = head;
    if (current == nullptr) {
        std::cout << "List is empty." << std::endl;
        return;
    }
    do {
        std::cout << current->data << " ";
        current = current->next;
    } while (current != head);
    std::cout << std::endl;
}

void CircularDoublyLinkedList::printBackward() {
    Node* current = head;
    if (current == nullptr) {
        std::cout << "List is empty." << std::endl;
        return;
    }
    do {
        std::cout << current->data << " ";
        current = current->prev;
    } while (current != head);
    std::cout << std::endl;
}
