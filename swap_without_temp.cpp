#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;

    cout << "  values Before swapping: "<<endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;


    a = a + b;     // we will not use a temp var here to swap instead we will do it by manipulating arithmetic operations
    b = a - b;
    a = a - b;

    cout << "Vales After swapping: "<<endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}
