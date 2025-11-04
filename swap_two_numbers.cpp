
#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    cout << "values of Num 1 and Num 2 Before swapping: "<<endl;
    cout << "Num 1 = " << num1 << endl;
    cout << "Num 2 = " << num2 << endl;


    num3 = num1;    // here we used a temporary 3rd variable num3 to swap values
    num1 = num2;
    num2 = num3;

    cout << "Values after After swapping: "<<endl;
    cout << "Num 1 = " << num1 << endl;
    cout << "Num 2 = " << num2 << endl;

    return 0;
}
