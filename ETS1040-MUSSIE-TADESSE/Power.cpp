#include <iostream>
#include <cmath> 
using namespace std;

int main() {
    float base, exponent, result;

    
    while (true) {
        cout << "Enter the number (base): ";
        cin >> base;

        
        if (cin.fail()) {
            cin.clear(); 
            cin.ignore(); 
            cout << "Please enter a valid number!" << endl;
        } else {
            break; 
        }
    }

    
    while (true) {
        cout << "Enter the exponent: ";
        cin >> exponent;

        
        if (cin.fail()) {
            cin.clear(); 
            cin.ignore(); 
            cout << "Please enter a valid number!" << endl;
        } else {
            break; 
        }
    }

    
    result = pow(base, exponent);

    
    cout << "The number " << base << " raised to the power of " << exponent << " is: " << result << endl;

    return 0;
}
