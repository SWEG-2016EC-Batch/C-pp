#include <iostream>

using namespace std;

int main() {
    float fuelTankCapacity, milesPerGallon, totalMiles;

    
    while (true) {
        cout << "Enter the capacity of your automobile fuel tank in gallons: ";
        cin >> fuelTankCapacity;

        
        if (cin.fail() || fuelTankCapacity < 0) {
            cin.clear(); 
            cin.ignore(); 
            cout << "Please enter a valid positive number!" << endl;
        } else {
            break; 
        }
    }
    while (true) {
        cout << "Enter the miles per gallon your automobile can achieve: ";
        cin >> milesPerGallon;
        if (cin.fail() || milesPerGallon < 0) {
            cin.clear();
            cin.ignore(); 
            cout << "Please enter a valid positive number!" << endl;
        } else {
            break; 
        }
    }

    totalMiles = milesPerGallon * fuelTankCapacity;
    cout << "The number of miles your automobile can drive without refueling is: "
         << totalMiles << " miles" << endl;

    return 0;
}
