#include <iostream>
using namespace std;
int main() {
    int x = 25;
    int *p=&x;
    cout<<"Value of x: "<<x<<endl;
    cout<<"Address of x: "<<&x<<endl;
    cout<<"Value of pointer p: "<<p<<endl;
    cout<<"Value pointed to by p: "<<*p<<endl;
    return 0;
}