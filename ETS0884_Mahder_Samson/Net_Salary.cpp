#include <iostream>
using namespace std;

int main(){
string name;
double weekly_working_hour, bonus_rate_per_hour, base_salary, bonus_payment, net_salary, pension, tax, gross_salary;
cout << "Enter employee's full name : ";
getline (cin, name);
cout<<"name : "<<name<<endl;
cout <<" Enter your weekly working hour: ";
cin>>weekly_working_hour;
cout<<" Enter bouns rate per hour: ";
cin>> bonus_rate_per_hour;
cout <<" Enter your base salary: ";
cin>> base_salary;
bonus_payment= weekly_working_hour*bonus_rate_per_hour;
cout<<"bonus payment : "<<bonus_payment<<endl;
gross_salary=base_salary+ bonus_payment;
cout<<"gross salary : "<<gross_salary<<endl;
pension=gross_salary*0.05;
cout<<"pensin : "<<pension<<endl;
tax=gross_salary*0.15;
cout<<"tax : "<<tax<<endl;
net_salary=gross_salary-(tax+pension);
cout<<"net salary : "<< net_salary;
return 0;
}
