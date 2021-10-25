//
//  Stack.hpp
//  Unit 7 No Brainer: Stack
//
//  Created by Coleton Watt on 10/25/21.
//

#ifndef Stack_hpp
#define Stack_hpp

#include <stdio.h>
#include <iostream>
using namespace std;

struct Node{
    string data;
    Node *next;
};

class Stack{
public:
    Stack();//constuctor create empty stack
    ~Stack();//delete object
    void push(string data);//add to stack
    void pop();//remove top value
    string peak();//see top value
    bool isEmpty();
    friend ostream &operator <<(ostream &, const Stack &);
    
    
    
private:
    Node *top;
};

#endif /* Stack_hpp */
