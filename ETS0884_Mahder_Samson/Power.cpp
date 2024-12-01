#include <iostream>
using namespace std;

int main(){
 int x,y, product = 1;
 cout << "enter the base number: ";
 cin >> x;
 if(cin.fail()){
    cout<<"Invalid input!";
    return 0;
 }
 cout << "enter the power number: ";
 cin >> y;
 if(cin.fail()){
    cout<<"Invalid input!";
    return 0;
 }
 
 for (int i = 1; i <= y; i++) {
     product *= x;
 }
 cout << "The result is " << product;
   
return 0;
}
