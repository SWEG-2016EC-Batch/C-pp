#include <iostream>
using namespace std;

int main()
{
    double gallon_gas, mile_gallon, total_mile;
    cout << "Enter the gas capacity of your car in gallons = ";
    cin >> gallon_gas;
    cout << "Enter the mile your Automobile can go per gallon = ";
    cin >> mile_gallon;

    total_mile = mile_gallon * gallon_gas;
    
    cout << "Your car is capable of driving " << total_mile << " miles with a full gas without refueling." <<endl;  

    return 0;
}