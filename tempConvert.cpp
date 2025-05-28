#include <iostream>
using namespace std;

int main() {
    char choice;
    float celsius;
    float fahrenheit;

    cout << "Convert (C)elsius to Fahrenheit or (F)ahrenheit to Celsius? (C/F): ";
    cin >> choice;

    if (choice == 'C' || choice == 'c') {
        cout << "Enter temp in Celsius: ";
        cin >> celsius;
        fahrenheit = (celsius * 9/5) + 32;
        cout << "Temp in Fahrenheit: " << fahrenheit << endl;
    } 
    else if (choice == 'F' || choice == 'f') {
        cout << "Enter temp in Fahrenheit: ";
        cin >> fahrenheit;
        celsius = (fahrenheit - 32) * 5/9;
        cout << "Temp in Celsius: " << celsius << endl;
    } 
    else {
        cout << "Invalid choice!" << endl;
    }

    return 0;
}
