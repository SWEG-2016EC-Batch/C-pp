#include <iostream>
using namespace std;
int main(){
    int cont=1;
    float height, weight, BMI;
   while(cont==1){
cout<<"Enter your height(m): "<<endl;
    cin>>height;
     if(cin.fail()||height<=0){
        cout<<"please enter a valid input!"<<endl;
        cin.clear(); 
            cin.ignore();
            continue;}
     cout<<"Enter your weight(kg): "<< endl;
    cin>>weight;
     if(cin.fail()||weight<=0){
        cout<<"please enter a valid input!"<<endl;
        cin.clear(); 
            cin.ignore();
            continue;}
  
    BMI=weight/(height*height);
    cout << "Your body mass index is: "<< BMI<<endl;
    if (BMI<18.5){
cout <<"Under weight"<<endl;

    }else if(BMI>=18.5 && BMI<24.9){
        cout <<"Normal weight"<<endl;
    }else{
        cout<<" Over weight"<<endl;
    }
     cout << "Do you want to continue? Yes(1) to continue or No(0) to stop : ";
        cin >> cont;
   }
    
    return 0;
}
