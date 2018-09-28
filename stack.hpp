//
// Created by auseg on 9/28/2018.
//

#ifndef LAB3_STACK_HPP
#define LAB3_STACK_HPP

#define MAX_SIZE  10

#endif //LAB3_STACK_HPP


class StackClass
{

private:
    //Private variables
    // Array that represents stack
    int Array[MAX_SIZE];
    // Index of current top element in stack
    int curTop;
public:
    //contructor
    StackClass();
    //function to push elements to top of stack
    bool push(int val);
    //function to pop elements off stack
    void pop();
    //Function that returns top element of stack
    const int top();
    //Function that returns true if stack is empty (false otherwise)
    const bool empty();
    //Function that returns true if stack is full (false otherwise)
    const bool full();
    //Function that prints the full stack onto screen (up to top element index)
    const void print();

};
