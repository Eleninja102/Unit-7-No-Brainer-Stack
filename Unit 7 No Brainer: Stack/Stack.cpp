//
//  Stack.cpp
//  Unit 7 No Brainer: Stack
//
//  Created by Coleton Watt on 10/25/21.
//

#include "Stack.hpp"
#include <iostream>


Stack::Stack(){
    top = nullptr;
}

Stack::~Stack(){
    while(!isEmpty()){
        pop();
    }
}

void Stack::push(string data){
    Node *toAdd = new Node;
    toAdd ->data = data;
    toAdd->next = nullptr;

    if(top == nullptr)/*empty stack*/{
        top = toAdd;
        toAdd->next = nullptr;
    }else{
        toAdd->next = top;
        top = toAdd;
        //toAdd->next = nullptr;

        
    }
    //toAdd->next = nullptr;

    
}

string Stack::peak(){
    return top->data;
}

void Stack::pop(){
    if(isEmpty()){
        Node *temp = top;
        top = top->next;
        delete temp;
    }
}
bool Stack::isEmpty(){
    
    return(top==nullptr);
}

ostream &operator <<(ostream & out, const Stack &s){
    Node *curr = s.top;
    while(curr != nullptr){
        out<< curr->data <<" ";
        curr = curr->next;
        
    }
    
    return out;
}
