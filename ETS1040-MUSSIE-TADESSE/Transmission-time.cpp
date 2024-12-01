#include <iostream>
#include<math.h>
using namespace std;

int main(int argc, char** argv) {
	float file_size,initial_take;
	int run_time;
	int choice;
	char answer;
	bool flag=0;
	do{
	
	cout<<"Please choose what size of file you will submit:\n";
	cout<<"1.Byte\n";
	cout<<"2.KiloByte\n";
	cout<<"3.MegaByte\n";
	cout<<"4.GigaByte\n";
	cout<<"5.TeraByte\n";
	cout<<"6.other\n";
	cin>>choice;
	
	if(cin.fail()|| choice>6||choice<=0){
		cin.clear();
		cin.ignore();
		cout<<"please enter a valid number!\n";
		flag=1;
	}
	
	else{
	cout<<"\n Now please enter the size in the corresponding type of size you chose:";
	cin>>initial_take;
		if(cin.fail()||initial_take<0){
			cin.clear();
		    cin.ignore();
		cout<<"please enter a valid number!\n";
		flag=1;
	}
	else{
	switch(choice){
		case 1:
			file_size=initial_take;
			break;
		case 2:
		file_size=pow(1024,choice-1)*initial_take;
		break;
		case 3:
		file_size=pow(1024,choice-1)*initial_take;
		break;
		case 4:
		file_size=pow(1024,choice-1)*initial_take;
		break;
		case 5:
		file_size=pow(1024,choice-1)*initial_take;
		break;
		default:
		cout<<"We don't support other kinds of sizes for the moment please try again!!\n";	
	}
	
	run_time=int(file_size/(960));
	cout<<"\nThe time it will take to transefer this file is: "<<run_time/(3600*24)<<" days, ";
	run_time%=(3600*24);
		cout<<run_time/(3600)<<" hours, ";
	run_time%=(3600);
		cout<<run_time/(60)<<" minutes, ";
	run_time%=(60);
		cout<<run_time<<" seconds. \n";
	cout<<"\n Would you like to use the program again? No=0, otherwise press another key to continue\n";
	cin>>answer;
}}
	
}while(answer!='0'||flag==1);
	
	
	return 0;
}
