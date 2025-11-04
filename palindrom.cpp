#include <iostream>
using namespace std;

int main() {
    int num,  remainder, original ,reversed = 0;

    cout << "Enter a number: ";
    cin >> num;

     original = num ;
    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num = num / 10;
    }
    cout<<" reversed number is "<<reversed<<endl;

    if (original == reversed)
       { cout << original << " is a palindrome number." << endl;
    }else {
        cout << original << " is not a palindrome number." << endl;
           }
    return 0;
}

