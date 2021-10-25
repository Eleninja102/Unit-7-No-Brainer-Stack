//
//  main.cpp
//  Unit 7 No Brainer: Stack
//
//  Created by Coleton Watt on 10/25/21.
//

#include <iostream>
#include "Stack.hpp"

using namespace std;

int main() {
    cout << "Stack implemented with a Linked List" << endl;
    Stack stack;
    stack.push("Orange Chicken");
    stack.push("ice cream");
    stack.push("CheeseCake");
    stack.push("Chicken");
    stack.push("Pizza");
    stack.push("Sushi");
    stack.push("Candy");
    stack.push("Bacon");
    stack.push("Steak");
    stack.push("Sandwitch");
    stack.push("WATER");
    
    cout<< stack << endl;
    for(int i = 0; i < 4;i++){
        stack.pop();
    }
    
    cout<< stack << endl;
    





    return 0;
}

