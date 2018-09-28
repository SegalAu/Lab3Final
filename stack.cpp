#include <iostream>
#include <limits>
#include <fstream>
#include <cstdlib>
#include <random>
#include <ctime>
#include <iomanip>
#include <string>
#include "stack.hpp"

using namespace std;


StackClass::StackClass(){
    //initialize empty int array
    curTop = -1;
}


bool StackClass::push(int val){
    //Push element val onto stack
    if(curTop<MAX_SIZE-1 ){
        curTop++;
        Array[curTop] = val;
        return true;
    }
    else{
        return false;
    }

}

void StackClass::pop(){
    //remove top element of stack
    if(curTop != -1){
        curTop--;
    }
}

int StackClass::top(){
    return Array[curTop];
}

bool StackClass::empty() {
    if(curTop == 0 || curTop == -1){
        return true;
    } else {
        return false;
    }
}

bool StackClass::full(){
    if(curTop == MAX_SIZE -1){
        return true;
    } else {
        return false;
    }
}

void StackClass::print(){
    cout << "Stack result : " << endl;
    if(curTop != -1 || curTop != 0){
        for(int i = 0; i <= curTop; i++){
            cout << Array[i] << " ";
        }
    } else {
        cout << "EMPTY" <<endl;
    }

    cout << endl;

}


