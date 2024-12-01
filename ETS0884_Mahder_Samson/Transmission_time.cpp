#include <iostream>
using namespace std;

int main() {
    
    double file_Size_in_Bytes, transmission_Rate, transmission_Time;

    transmission_Rate = 960; 
    cout << "Enter the file size (in bytes): ";
    cin >> file_Size_in_Bytes;
    if(cin.fail()|| file_Size_in_Bytes <0){
        cout<<"Please enter a valid input!, The input can not be a non-numeric character and a negative number. ";
        return 0;
    }

   
    transmission_Time = file_Size_in_Bytes / transmission_Rate;
     int totalSeconds = static_cast<int>(transmission_Time);

   
    int days = totalSeconds / (24 * 3600);
    totalSeconds %= (24 * 3600);
    int hours = totalSeconds / 3600;
    totalSeconds %= 3600;
    int minutes = totalSeconds / 60;
    int seconds = totalSeconds % 60;
   

 
    cout << "Transmission time for a file of size " 
         << file_Size_in_Bytes << " bytes is: " << endl;
    cout << days << " days " << hours << " hours " << minutes << " minutes and " << seconds << " seconds " << endl;

    return 0;
}
