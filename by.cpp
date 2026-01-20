#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;

//     1. User defined function

// non-void function
int add(int a, int b) // function declaration
{
    return a + b; // function definition
}
// void function
void greet()
{
    cout << "Hello, World!" << endl;
}
// bool return type function
bool isEven(int num)
{
    return num % 2 == 0;
}
//      2. Call by value
void callByValue(int x)
{
    x = 100;
    cout << "Inside callByValue: " << x << endl;
}
//      3. Call by reference
void callByReference(int &b)
{
    b = 200;
    cout << "Inside callByReference: " << b << endl;
}
//     4. Call by pointer
void callByPointer(int *p)
{
    *p = 300;
    cout << "Inside callByPointer: " << *p << endl;
}
