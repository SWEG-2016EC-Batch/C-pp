#include <iostream>
using namespace std;
int main (){
double total_mark;
int quiz,assignment, project, test, final_exam, continue_=1;
char grade;
while (continue_==1)
{
    cout<<"enter test result ";
cin>>test;
cout<<"enter quiz result ";
cin>>quiz;
cout<<"enter assignment result ";
cin>>assignment;
cout<<"enter project result ";
cin>>project;
cout<<"enter final exam result ";
cin>>final_exam;
total_mark= (test *015)+(quiz*0.05)+(project*0.2)+(assignment*0.1)+(final_exam*0.5);
cout<<"total_mark: "<<total_mark<< endl;
if (total_mark >= 90){
        cout<<"A+\n";}
    else if (total_mark >= 80){
       cout<<"A\n";  }
    else if (total_mark >= 75){
         cout<<"B+\n";;}
    else if (total_mark >= 60){
         cout<<"B\n";}
     else if (total_mark >= 55){
         cout<<"C+\n";}
     else if (total_mark >= 45){
         cout<<"C\n";}
     else if (total_mark >= 30){
         cout<<"D\n";}
    else{
         cout<<"F";}
cout<<"do you want to continue? enter 1 if yes, otherwise enter any other input!";
cin>>continue_;
}   




    return 0;
}

    






   
   


