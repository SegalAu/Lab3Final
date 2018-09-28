#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "stack.hpp"

using namespace std;




TEST_CASE("A new stack is empty", "[stack")
{
    StackClass stack;

    REQUIRE(stack.empty() == true);
    REQUIRE(stack.full() == false);
}


TEST_CASE("Add 10 elements", "[stack")
{
    StackClass stack;

    REQUIRE(stack.push(1));
    REQUIRE(stack.push(2));
    REQUIRE(stack.push(3));
    REQUIRE(stack.push(4));
    REQUIRE(stack.push(5));
    REQUIRE(stack.push(6));
    REQUIRE(stack.push(7));
    REQUIRE(stack.push(8));
    REQUIRE(stack.push(9));
    REQUIRE(stack.push(10));
    REQUIRE(!stack.push(11));
    REQUIRE(stack.full());
    REQUIRE(stack.empty() == false);
}

TEST_CASE("Testing pushing and popping off stack", "[stack")
{
    StackClass stack;

    REQUIRE(stack.empty());
    REQUIRE(stack.full() == false);

    REQUIRE(stack.push(1));
    REQUIRE(stack.push(2));
    REQUIRE(stack.push(3));
    REQUIRE(stack.top() == 3);
    stack.pop();
    REQUIRE(stack.top()==2);
    stack.pop();
    REQUIRE(stack.top()==1);
    stack.pop();
    REQUIRE(stack.empty());

}

TEST_CASE("Testing printing stack", "[stack")
{
    StackClass stack;



    REQUIRE(stack.empty());
    REQUIRE(stack.full() == false);



    REQUIRE(stack.push(1));
    REQUIRE(stack.push(2));
    REQUIRE(stack.push(3));
    REQUIRE(stack.top() == 3);
    stack.pop();
    REQUIRE(stack.top()==2);
    stack.pop();
    REQUIRE(stack.top()==1);
    stack.pop();
    REQUIRE(stack.empty());
    REQUIRE(stack.push(2));
    REQUIRE(stack.push(5));
    REQUIRE(stack.push(8));
    cout << "Array should be: 2, 5, 8" << endl;
    stack.print();

}