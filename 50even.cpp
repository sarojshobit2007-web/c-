#include <iostream>
using namespace std;

int main() {
    int count = 0;
    int num = 2;

    while (count < 50) {
        cout << num << " ";
        num += 2;
        count++;
    }

    return 0;
}