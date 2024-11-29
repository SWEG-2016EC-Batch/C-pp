#include <iostream>
#include <stdlib.h> 
using namespace std;

int main(int argc, char** argv) {
    float working_hour, bonus_rate, base_salary, net_salary, pension, tax;
    string name;

    cout << "Enter your name: ";
    cin >> name;

    
    while (true) {
        cout << "Enter your base salary: ";
        cin >> base_salary;
        if (cin.fail() || base_salary < 0) { 
            cin.clear(); 
            cin.ignore(); 
            cout << "Enter a valid input!" << endl;
        } else {
            break; 
        }
    }

    
    while (true) {
        cout << "Enter your weekly working hour: ";
        cin >> working_hour;
        if (cin.fail() || working_hour < 0) { 
            cin.clear(); 
            cin.ignore();
            cout << "Enter a valid input!" << endl;
        } else {
            break; 
        }
    }

    
    while (true) {
        cout << "Enter your bonus rate per hour: ";
        cin >> bonus_rate;
        if (cin.fail() || bonus_rate < 0) { 
            cin.clear(); 
            cin.ignore();
            cout << "Enter a valid input!" << endl;
        } else {
            break; 
        }
    }

    pension = (base_salary + (working_hour * bonus_rate)) * 0.05;
    tax = (base_salary - pension) * 0.15;
    net_salary = base_salary - pension - tax + (working_hour * bonus_rate);

    cout << "Employee name: " << name << endl;
    cout << "Your gross salary is: " << (base_salary + (working_hour * bonus_rate)) << endl;
    cout << "Your net salary is: " << net_salary << endl;
    cout << "Your bonus payment is: " << (working_hour * bonus_rate) << endl;

    return 0; 
}
