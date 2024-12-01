#include <iostream>
using namespace std;
int main(){
    double fuel_tank_capacity, miles_per_gallon, total_miles;;
    cout<<"Enter the fuel tank capacity in gallon: "<< endl;
    cin>>fuel_tank_capacity;
    if(cin.fail()|| fuel_tank_capacity<0){
        cout<<"Invalid input! Fuel tank capacity can not be a negative number and non numeric character.";
        cin.clear();
        cin.ignore();
        return 0;
        }
    cout << "Enter the vehicle's fuel efficiency (miles per gallon): ";
    cin >> miles_per_gallon;
    if(cin.fail()|| miles_per_gallon<0){
        cout<<"Invalid input!";
        cin.clear();
        cin.ignore();
        return 0;
    }
   total_miles=fuel_tank_capacity*miles_per_gallon;
    cout<<"the automobile can be driven "<<total_miles<<" Miles with out refueling. ";
    return 0;
}
