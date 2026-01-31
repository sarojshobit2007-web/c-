#include <iostream>
using namespace std;

int main() {
    int arr[3];

    cout << "Enter 3 integers: ";
    for (int i = 0; i < 3; i++) {
        cin >> arr[i];
    }

    cout << "Arrey entered are :/n";
    for (int i = 0; i < 3; i++) {
        cout << arr[i] << " ";
    }

    cout << Array element are :/n;
    for (int i = 0; i < 3; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}