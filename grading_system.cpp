#include <iostream>
using namespace std;

int main() {
    float eng, math, cs, pak, isl;
    float total, percentage;

    cout << "Enter marks in English: ";
    cin >> eng;
    cout << "Enter marks in Math: ";
    cin >> math;
    cout << "Enter marks in Computer: ";
    cin >> cs;
    cout << "Enter marks in Pakistan Studies: ";
    cin >> pak;
    cout << "Enter marks in Islamiat: ";
    cin >> isl;


    total = eng + math + cs + pak + isl;
    percentage = (total / 500) * 100;


    cout << "\nTotal Marks = " << total << " out of 500" << endl;
    cout << "Percentage = " << percentage << "%" << endl;


    if (percentage >= 90 && percentage <= 100) {
        cout << "Grade: A+" << endl;
    }
    else if (percentage >= 80) {
        cout << "Grade: A" << endl;
    }
    else if (percentage >= 70) {
        cout << "Grade: B" << endl;
    }
    else if (percentage >= 60) {
        cout << "Grade: C" << endl;
    }
    else if (percentage >= 50) {
        cout << "Grade: D" << endl;
    }
    else {
        cout << "Grade: Fail" << endl;
    }

    return 0;
}
