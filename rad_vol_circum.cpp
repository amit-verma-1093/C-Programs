#include <iostream>
using namespace std;

int main() {
    double r, h;
    const double pi = 3.14159;

    cout << "Enter radius and height: ";
    cin >> r >> h;

    cout << "1. Radius\n";
    cout << "2. Circumference\n";
    cout << "3. Volume\n";

    int choice;
    cin >> choice;

    switch(choice) {
        case 1:
            cout << "Radius = " << r;
            break;

        case 2:
            cout << "Circumference = " << 2 * pi * r;
            break;

        case 3:
            cout << "Volume = " << pi * r * r * h;
            break;

        default:
            cout << "Invalid choice";
    }

    return 0;
}