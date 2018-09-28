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

/*  Function constructs stack class by setting index of stack top to -1
 *  @param - none
 *  @return -none
 */
StackClass::StackClass(){
    //initialize empty int array
    curTop = -1;
}

/* Function pushes value onto top of stack and updates index of
 * top of stack. Will fail and return false if stack has reached
 * maximum size, returns true and pushes value elsewise.
 * @param - value to be pushed
 * @return - boolean, whether push was successful or not
 */
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

/* Function takes out the top element of the stack
 * @param - none
 * @return - none
 */
void StackClass::pop(){
    //remove top element of stack
    if(curTop != -1){
        curTop--;
    }
}

/* Function returns value at top of Stack
 * @param - none
 * @return - value that is stored at the top of the stack
 */

int StackClass::top(){
    return Array[curTop];
}

/* Function returns true when stack is empty and false elsewise
 * @param - none
 * @return - boolean, whether stack is empty or not
 */
bool StackClass::empty() {
    return (curTop == -1);
}

/* Function returns true when stack is full and false elsewise
 * @param - none
 * @return - boolean, whether stack is full or not
 */
bool StackClass::full(){
    return(curTop == MAX_SIZE -1);
}

/*Function prints stack as an array on screen
 * @param - none
 * @return - none
 *
 */

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


