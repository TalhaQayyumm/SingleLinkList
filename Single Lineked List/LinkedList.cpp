#include "LinkedList.h"
#include <iostream>
using namespace std;

Node::Node(int value) {
    data = value;
    next = nullptr;
}

LinkedList::LinkedList() {
    head = nullptr;
    while (head != nullptr) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
}



void LinkedList::InsertAt(int position, int value) {
    if (position < 0) {
        cout << "Invalid position\n";
        return;
    }

    Node* newNode = new Node(value);

    if (position == 0) {
        newNode->next = head;
        head = newNode;
        return;
    }

    Node* current = head;
    int currentPosition = 0;

    while (current != nullptr && currentPosition < position - 1) {
        current = current->next;
        currentPosition++;
    }

    if (current == nullptr) {
        cout << "Invalid position\n";
        delete newNode;
        return;
    }

    newNode->next = current->next;
    current->next = newNode;
}

void LinkedList::InsertBefore(int valueToInsertBefore, int value) {
    Node* newNode = new Node(value);

    if (head == nullptr) {
        cout << "List is empty\n";
        delete newNode;
        return;
    }

    if (head->data == valueToInsertBefore) {
        newNode->next = head;
        head = newNode;
        return;
    }

    Node* current = head;

    while (current->next != nullptr && current->next->data != valueToInsertBefore) {
        current = current->next;
    }

    if (current->next == nullptr) {
        cout << "Value not found in the list\n";
        delete newNode;
        return;
    }

    newNode->next = current->next;
    current->next = newNode;
}

void LinkedList::InsertAtHead(int value) {
    Node* newNode = new Node(value);
    newNode->next = head;
    head = newNode;
}

void LinkedList::InsertAtTail(int value) {
    Node* newNode = new Node(value);

    if (head == nullptr) {
        head = newNode;
        return;
    }

    Node* current = head;

    while (current->next != nullptr) {
        current = current->next;
    }

    current->next = newNode;
}

void LinkedList::PrintList() {
    Node* current = head;
    while (current != nullptr) {
        
        cout << current->data << " " << " -> ";
        current = current->next;
    }
    cout << endl;
}
