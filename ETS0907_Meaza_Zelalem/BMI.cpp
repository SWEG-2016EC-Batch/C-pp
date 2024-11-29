
#include <iostream>
using namespace std;
int main(){
 
    float BMI, height,weight;
    int continue_=1;
    while(continue_==1){
    cout<<"please enter your height";
    cin>>height;
    if(cin.fail()||height<=0){
        cout<<"please enter a valid input!"<<endl;
        cin.clear(); 
            cin.ignore();
            continue;}
    cout<<"height=  "<<height<<endl;
    cout<<"please enter your weight";
    cin>>weight;
    if(cin.fail()||weight<=0){
        cout<<"please enter a valid input!"<<endl;
        cin.clear(); 
            cin.ignore();
            continue;}
     cout<<"weight=  "<<weight<<endl;
     
     
     BMI=weight/(height*height);
     cout<<"your body mass index BMI= "<<BMI<<endl;
     if (BMI<18.5){
        cout<<"status= under weight"<<endl;
        }
        else if (18.5 <= BMI <= 24.9){
        cout<<"status= normal weight"<<endl;
        } else if (25<=BMI<=29.9){
            cout<<"status= over weight"<<endl;
        }
        else if(BMI>=30){
            cout<<"obesity"<<endl;
    
        } else {
     break;
        } 
        cout<<"do you want to continue? enter 1 if yes, otherwise enter any number except 1."<<endl;
        cin>>continue_;
        

    }
   
    return 0;
    }
