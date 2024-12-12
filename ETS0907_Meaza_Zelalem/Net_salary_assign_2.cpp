#include <iostream>
#include <cmath>
using namespace std;
int main (){
double basic_salary, net_pay, pension_deduction,bonus, gross_salary, bonus_rate,tax_deduction,tax_rate;
int worked_hour ;
cout<<"enter your basic salary";
cin>>basic_salary;
pension_deduction= basic_salary*0.07;
cout<<"enter your total worked hour";
cin>>worked_hour;
if(worked_hour>40){
    cout<<"enter bonus rate\n ";
cin>>bonus_rate;
bonus=(worked_hour-40)*bonus_rate;
cout<<"your bonus to be added to your basic salary is: "<<bonus<<endl;
cout<<"basic salary= "<<basic_salary<<endl;
} else {
   cout<<"basic salary= "<<basic_salary<<endl;;
  
}
 if (basic_salary>=0 && basic_salary<200){
       tax_rate=0;
      

    }else if(basic_salary>=200 && basic_salary<600){
        tax_rate=0.1;
        cout<<"tax rate is: "<<tax_rate;
    }else if(basic_salary>=600 && basic_salary<1200){
         tax_rate=0.15;
        cout<<"tax rate is: "<<tax_rate;
    }else if(basic_salary>=1200 && basic_salary<2000){
         tax_rate=0.2;
        cout<<"tax rate is: "<<tax_rate;
    }else if(basic_salary>=2000 && basic_salary<3500){
         tax_rate=0.25;
        cout<<"tax rate is: "<<tax_rate;
    }else if(basic_salary>3500){
        tax_rate=0.3;
        cout<<"tax rate is: "<<tax_rate;
    } else {
        cout<<" wrong amount! please enter the right amount of your basic salary.";
        return 0;
    }
    gross_salary=basic_salary+bonus;
    cout<<" gross salary= "<<gross_salary<<endl;
    if (tax_rate==0){
        cout<<"no tax deduction"<<endl;
        if(worked_hour<=40){
            net_pay=basic_salary-pension_deduction;
            cout<<"net pay: "<<net_pay;
        }else{
            net_pay=gross_salary-pension_deduction;
            cout<<"net pay: "<<net_pay;
        }
    }else{
     tax_deduction= gross_salary/ (basic_salary*tax_rate);
     cout<<" tax deduction= "<< tax_deduction;
     net_pay=(gross_salary - pension_deduction - tax_deduction);
     cout<< " your net pay is: "<<net_pay;
    }
 


    return 0;
}

    






   
   


