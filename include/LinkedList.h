#ifndef LINKEDLIST_H
#define LINKEDLIST_H

struct Node
{
    int data;
    Node *next;
};

class LinkedList
{
public:
    LinkedList();
    ~LinkedList();
    void insert(int data);
    void remove(int data);
    void print() const;

private:
    Node *head;
};

#endif // LINKEDLIST_H