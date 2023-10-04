#ifndef LINKEDLIST_H
#define LINKEDLIST_H

class Node {
public:
    int data;
    Node* next;
    Node(int value);
};

class LinkedList {
private:
    Node* head;

public:
    LinkedList();
    //~LinkedList();

    void InsertAt(int position, int value);
    void InsertBefore(int valueToInsertBefore, int value);
    void InsertAtHead(int value);
    void InsertAtTail(int value);

    void PrintList();
};

#endif
