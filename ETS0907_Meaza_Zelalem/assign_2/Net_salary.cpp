#include <iostream>
using namespace std;

int main() {
    double basic_salary, net_pay, pension_deduction, bonus = 0, gross_salary, bonus_rate, tax_deduction = 0, tax_rate = 0;
    int worked_hour;

   
    cout << "Enter your basic salary: ";
    cin >> basic_salary;
    cout << "Enter your total worked hours: ";
    cin >> worked_hour;

 
    pension_deduction = basic_salary * 0.07;

    
    if (worked_hour > 40) {
        cout << "Enter bonus rate per extra hour: ";
        cin >> bonus_rate;
        bonus = (worked_hour - 40) * bonus_rate;
    }

    
    gross_salary = basic_salary + bonus;


    if (basic_salary >= 0 && basic_salary < 200) {
        tax_rate = 0;
    } else if (basic_salary >= 200 && basic_salary < 600) {
        tax_rate = 0.1;
    } else if (basic_salary >= 600 && basic_salary < 1200) {
        tax_rate = 0.15;
    } else if (basic_salary >= 1200 && basic_salary < 2000) {
        tax_rate = 0.2;
    } else if (basic_salary >= 2000 && basic_salary < 3500) {
        tax_rate = 0.25;
    } else if (basic_salary >= 3500) {
        tax_rate = 0.3;
    } else {
        cout << "Invalid salary amount!" << endl;
        return 0;
    }


    tax_deduction = gross_salary * tax_rate;

    net_pay = gross_salary - pension_deduction - tax_deduction;

 
    cout << "Pension deduction: " << pension_deduction << endl;
    cout << "Gross salary: " << gross_salary << endl;
    cout << "Tax deduction: " << tax_deduction << endl;
    cout << "Net pay: " << net_pay << endl;

    return 0;
}
