// Alexis Lopez Echevarria, 1/16/26, Calculate Area and Perimeter based on given lengths or widths depending on whats given and which option is chosen.
// AI ASSISTANCE DISCLOSURE
//
// Tool(s) Used: [ChatGPT]
// Date(s) of Use: [1/16/2026]
//
// Description of Use: 
// ChatGPT was used to find where i made spelling mistakes, replacing : with ; or finding where it technically went wrong without the program giving me an error.
//
#include <iostream>
using namespace std;


double calculateArea(const double radius); // calculate area of circle
double calculateArea(const double length, const double width); // calculate area of square
double calculatePerimeter(const double radius); // calculate perimeter of a circle
double calculatePerimeter(const double length, const double width); // calculate perimeter of a square

int main() {
    int choice; // saves users choice

    do {
        // choice menu
        cout << "\nMenu\n";
        cout << "1. Area of a circle\n";
        cout << "2. Perimeter of a circle\n";
        cout << "3. Area of a rectangle\n";
        cout << "4. Perimeter of a rectangle\n";
        cout << "5. Quit\n";
        cout << "Choice: ";
        cin >> choice;

        if (choice == 1) {
            // area of circle calculations
            double r;
            cout << "Enter radius: ";
            cin >> r;
            cout << "Area: " << calculateArea(r) << endl;
        }
        else if (choice == 2) { 
            // perimeter of a circle 
            double r;
            cout << "Enter radius: ";
            cin >> r;
            cout << "Perimeter: " << calculatePerimeter(r) << endl;
        }
        else if (choice == 3) {
            // calculate area of a rectangle
            double l, w;
            cout << "Enter length: ";
            cin >> l;
            cout << "Enter width: ";
            cin >> w;
            cout << "Area: " << calculateArea(l, w) << endl;
        }
        else if (choice == 4) {
            // perimeter of rectangle calculations
            double l, w;
            cout << "Enter length: ";
            cin >> l;
            cout << "Enter width: ";
            cin >> w;
            cout << "Perimeter: " << calculatePerimeter(l, w) << endl;
        }

    } while (choice != 5); // repeats menu till user chooses 5 

    return 0;
}

double calculateArea(const double radius) {
    const double PI = 3.14159; // pi for circle calculations 
    return PI * radius * radius; // area of circle
}

double calculateArea(const double length, const double width) {
    return length * width; // area of rectangle
}

double calculatePerimeter(const double radius) {
    const double PI = 3.14159;
    return 2 * PI * radius; // perimeter of circle 
}

double calculatePerimeter(const double length, const double width) {
    return 2 * (length + width); // perimeter of rectangle
}
