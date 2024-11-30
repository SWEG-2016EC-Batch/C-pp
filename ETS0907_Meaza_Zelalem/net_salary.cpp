#include <iostream>
#include <string>
using namespace std;
int main(){
    int wekly_working_hour,bonus_rate_per_hour,base_salary;
    double bonus_payment,gross_salary,pension, tax, net_salary;
 string name;
 cout<<"enter your fullname ";
 getline(cin, name);
 cout<<"name : "<<name<<endl;
cout<<"enter weekly working hour ";
cin>>wekly_working_hour;
cout<<"enter the bonus rate per hour ";
cin>>bonus_rate_per_hour;
cout<<"enter your base salary";
cin>>base_salary;
bonus_payment=wekly_working_hour*bonus_rate_per_hour;
cout<<"bonus payment : "<<bonus_payment<<endl;
gross_salary=base_salary+ bonus_payment;
cout<<"gross salary : "<<gross_salary<<endl;
pension=gross_salary*0.05;
cout<<"pensin : "<<pension<<endl;
tax=gross_salary*0.15;
cout<<"tax : "<<tax<<endl;
net_salary=gross_salary-tax-pension;
cout<<"net salary : "<< net_salary;


  return 0;
    }
