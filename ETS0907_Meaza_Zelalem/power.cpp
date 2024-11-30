#include <iostream>
#include <cmath>
using namespace std;
int main(){
 double x,y,result;
 cout<<"enter the base ";
 cin>>x;
 if(cin.fail()){
    cout<<"Invalid input!";
    return 0;
 }
 cout<<"enter the exponent ";
 cin>>y;
 if(cin.fail()){
    cout<<"Invalid input!";
    return 0;
 }
result=pow(x, y);
cout<<result<<endl;

 

   
    return 0;
    }
