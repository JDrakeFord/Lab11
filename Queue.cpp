//
// Created by Jesse Ford on 11/10/21.
//
#include "Queue.h"

void Queue::print()

{

    cout << "[ ";

    for (Node* cur = head; cur != NULL; cur = cur->next)

    {

        cout << cur->elem << " ";

    }

    cout << "]" << endl;

}

Queue::Queue() {
    head = new Node;
    tail = head;
    numElements = 0;
}

Queue::~Queue() {
    Node *current = head;
    Node *del;
    while(current != NULL)
    {
        del = current;
        current = current -> next;
        delete del;
    }
}

bool Queue::empty() const {
    if(numElements == 0)
        return true;
    else
        return false;
}

unsigned int Queue::size() const {
    return numElements;
}

void Queue::pop() {
    Node *temp = head;
    head = head -> next;
    delete temp;
    numElements--;
}

int &Queue::back() {
    return (tail -> elem);
}

const int &Queue::back() const {
    return (tail -> elem);
}

int &Queue::front() {
    return (head -> elem);
}

const int &Queue::front() const {
    return (head -> elem);
}

void Queue::push(const int &x) {
    if(!empty())
    {
        Node *current = head;
        while(current -> next != NULL)
        {
            current = current -> next;
        }
        current -> next = new Node;
        current -> next -> elem = x;
        tail = current -> next;
        numElements++;
    }
    else
    {
        head -> elem = x;
        numElements++;
    }

}



