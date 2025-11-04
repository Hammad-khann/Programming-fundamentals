#include <iostream>
#include <ctime>
using namespace std;

int main() {
    time_t current = time(0);

    cout << "Time in seconds: " << current << endl;



    cout << "Current date and time: " << asctime(localtime(&current));

    return 0;
}
