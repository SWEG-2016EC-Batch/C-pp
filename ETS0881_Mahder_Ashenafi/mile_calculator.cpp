#include <iostream>
using namespace std;

int main()
{
    double gallon_gas, mile_gallon, total_mile;
    cout << "Enter the gas capacity of your car in gallons = ";
    cin >> gallon_gas;

    if (cin.fail() || gallon_gas < 0)
    {
        cout << "Invalid input! Fuel tank capacity can not be a negative number and non numeric character.";
        return 0;
    }

    cout << "Enter the mile your Automobile can go per gallon = ";
    cin >> mile_gallon;

    if (cin.fail() || mile_gallon < 0)
    {
        cout << "Invalid input! Fuel tank capacity can not be a negative number and non numeric character.";
        return 0;
    }

    total_mile = mile_gallon * gallon_gas;

    cout << "Your Automobile is capable of driving " << total_mile << " miles with a full gas without refueling." << endl;

    return 0;
}
