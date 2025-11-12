#include <iostream>
using namespace std;

int main() {
    int choice;
    cout << "=================================" << endl;
    cout << "  WELCOME TO HILL VIEW SWABI   " << endl;
    cout << "=================================" << endl;
    cout << "OUR MENU:" << endl;
    cout << "1. Chicken Karahi     - Rs. 1500" << endl;
    cout << "2. Pulao              - Rs. 750" << endl;
    cout << "3. Mutton Karahi      - Rs. 3000" << endl;
    cout << "4. Grilled Fish       - Rs. 1200" << endl;
    cout << "5. Beef Karahi        - Rs. 1800" << endl;
    cout << "===============================" << endl;

    cout << "Enter your choice (1-5): ";
    cin >> choice;

    cout << endl;

    switch (choice) {
        case 1:
            cout << "You selected: Chicken Karahi" << endl;
            cout << "Price: Rs. 1500" << endl;
            break;
        case 2:
            cout << "You selected: Pulao" << endl;
            cout << "Price: Rs. 750" << endl;
            break;
        case 3:
            cout << "You selected: Mutton Karahi" << endl;
            cout << "Price: Rs. 3000" << endl;
            break;
        case 4:
            cout << "You selected: Grilled Fish" << endl;
            cout << "Price: Rs. 1200" << endl;
            break;
        case 5:
            cout << "You selected: Beef Karahi" << endl;
            cout << "Price: Rs. 1800" << endl;
            break;
        default:
            cout << "Invalid choice! Please select between 1-5." << endl;
    }

    cout << "===============================" << endl;
    cout << "Thank you for visiting HILL VIEW" << endl;

    return 0;
}

