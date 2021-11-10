//
// Created by Jesse Ford on 11/10/21.
//
#include "Stack.h"

Stack::Stack() {
    numElements = 0;
    buffer = new int[100];
    topIndex = 0;
}

Stack::~Stack() {
    delete[] buffer;
}

bool Stack::empty() const {
    if(numElements == 0)
        return true;
    else
        return false;
}

unsigned int Stack::size() const {
    return numElements;
}

int &Stack::top() {
    return buffer[topIndex];
}

const int &Stack::top() const {
    return buffer[topIndex];
}

void Stack::push(const int &x) {
    if(empty())
    {
        buffer[topIndex] = x;
    }
    else
    {
        buffer[topIndex + 1] = x;
        topIndex++;
    }
    numElements++;
}

void Stack::pop() {
    buffer[topIndex] = NULL;
    topIndex--;
    numElements--;
}

void Stack::print()

{

    cout << "[ ";

    for (int i = 0; i < numElements; ++i)

    {

        cout << buffer[i] << " ";

    }

    cout << "]" << endl;

}


