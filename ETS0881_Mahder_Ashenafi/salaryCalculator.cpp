#include <iostream>
using namespace std;
int main()
{
    int cont = 1;
    while (cont == 1)
    {
        float base_salary, gross_salary, net_salary, bonus_payment, weekly_hours;
        float bonus_rate;
        int tryal = 1;

    a:
        cout << "Enter base salary : ";
        cin >> base_salary;

        if (cin.fail() || base_salary < 0)
        {
            cin.clear();
            tryal += 1;
            if (tryal <= 2)
            {
                cout << "Enter a valid number you have "
                     << 3 - tryal << " tries left." << endl;
                goto a;
            }
            else
            {
                exit(0);
            }
        }

    b:
        cout << "Enter bonus rate per hour(%) : ";
        cin >> bonus_rate;
        if (cin.fail() || bonus_rate < 0)
        {
            cin.clear();
            tryal += 1;
            if (tryal <= 2)
            {
                cout << "Enter a valid number you have "
                     << 3 - tryal << " tries left." << endl;
                goto b;
            }
            else
            {
                exit(0);
            }
        }

    c:
        cout << "Enter weekly working hours : ";
        cin >> weekly_hours;
        if (cin.fail() || weekly_hours < 0)
        {
            cin.clear();
            tryal += 1;
            if (tryal <= 2)
            {
                cout << "Enter a valid number you have "
                     << 3 - tryal << " tries left." << endl;
                goto c;
            }
            else
            {
                exit(0);
            }
        }

        bonus_rate /= 100;
        bonus_payment = weekly_hours * bonus_rate * base_salary;
        gross_salary = base_salary + bonus_payment;
        float tax = gross_salary * 0.15;
        float pension = gross_salary * 0.05;
        net_salary = gross_salary - tax - pension;

        cout << "Your bonus-payment is " << bonus_payment << endl;
        cout << "Your gross-salary is " << gross_salary << endl;
        cout << "Tax: " << tax << " and Pension: " << pension << endl;
        cout << "Your net-salary is " << net_salary << endl;

        cout << "Do you want to continue? Yes(1) or No(0) : ";
        cin >> cont;
    }
}