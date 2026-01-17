#include <iostream>
using namespace std;

double calculateArea(const double radius);
double calculateArea(const double length, const double width);
double calculatePerimeter(const double radius);
double calculatePerimeter(const double length, const double width);

int main() {
    int choice;

    do {
        cout << "\nMenu\n";
        cout << "1. Area of a circle\n";
        cout << "2. Perimeter of a circle\n";
        cout << "3. Area of a rectangle\n";
        cout << "4. Perimeter of a rectangle\n";
        cout << "5. Quit\n";
        cout << "Choice: ";
        cin >> choice;

        if (choice == 1) {
            double r;
            cout << "Enter radius: ";
            cin >> r;
            cout << "Area: " << calculateArea(r) << endl;
        }
        else if (choice == 2) {
            double r;
            cout << "Enter radius: ";
            cin >> r;
            cout << "Perimeter: " << calculatePerimeter(r) << endl;
        }
        else if (choice == 3) {
            double l, w;
            cout << "Enter length: ";
            cin >> l;
            cout << "Enter width: ";
            cin >> w;
            cout << "Area: " << calculateArea(l, w) << endl;
        }
        else if (choice == 4) {
            double l, w;
            cout << "Enter length: ";
            cin >> l;
            cout << "Enter width: ";
            cin >> w;
            cout << "Perimeter: " << calculatePerimeter(l, w) << endl;
        }

    } while (choice != 5);

    return 0;
}

double calculateArea(const double radius) {
    const double PI = 3.14159;
    return PI * radius * radius;
}

double calculateArea(const double length, const double width) {
    return length * width;
}

double calculatePerimeter(const double radius) {
    const double PI = 3.14159;
    return 2 * PI * radius;
}

double calculatePerimeter(const double length, const double width) {
    return 2 * (length + width);
}
