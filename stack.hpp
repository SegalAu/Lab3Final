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
    int Array[MAX_SIZE];
    int curTop;
public:
    //contructor
    StackClass();
    bool push(int val);
    void pop();
    int top();
    bool empty();
    bool full();
    void print();

};
