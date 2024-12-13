#include <iostream>
using namespace std;

int main()
{
    float net_pay, pension, tax, gross_salary, bonus, tax_rate, worked_hours, bonus_rate;
    int basic_salary;
    float extra_hour = 0;
    
    cout << "Enter your basic salary = ";
    cin >> basic_salary;
    cout << "Enter your worked hours = ";
    cin >> worked_hours;
    cout << "Enter bonus rate = ";
    cin >> bonus_rate;

    if (worked_hours > 40)
    {
        cout << "Enter over time bonus hour = ";
        cin >> extra_hour;
    }
    

    bonus = extra_hour * bonus_rate;
    gross_salary = basic_salary + bonus;
    pension = basic_salary * 0.07;

    if (basic_salary <= 200) {
       tax_rate = 0;
    } else if (basic_salary <= 600) {
      tax_rate = 0.1;
    } else if (basic_salary <= 1200) {
    tax_rate = 0.15;
    } else if (basic_salary <= 2000) {
        tax_rate = 0.2;
    } else if (basic_salary <= 3500) {
       tax_rate = 0.25;
    } else {
      tax_rate = 0.3;
    }
    tax = gross_salary * tax_rate;
    net_pay = gross_salary - pension - tax;

    cout <<'\n';
    cout << "Bonus = " << bonus <<'\n';
    cout << "Gross salary = " << gross_salary <<'\n';
    cout << "Tax = " << tax <<'\n';
    cout << "Pension = " << pension <<'\n';
    cout << "Net salary = " << net_pay <<'\n';
    cout <<'\n';

    return 0;
}
