/*This program takes weight and height measurements from the user for multiple
individuals. It then calculates their Body Mass Index (BMI) using the formula
BMI = weight (kg) / height (m)² and displays each person's BMI and weight 
classification (underweight, normal weight, or overweight).*/
#include <iostream>

using namespace std;

int main() {
    int numPeople;

    cout << "How many people's BMIs will you calculate today? ";
    cin >> numPeople;

    for (int i = 1; i <= numPeople; i++) {
        double massInKg,  heightInMeters, bodyMassIndex;

        cout << "\nPerson #" << i << ":" << endl;

        cout << "Enter mass (in kilograms): ";
        cin >> massInKg;

        cout << "Enter height (in meters): ";
        cin >> heightInMeters;

        bodyMassIndex = massInKg / (heightInMeters * heightInMeters);

        cout << "BMI: " << bodyMassIndex << endl;


        if (bodyMassIndex < 18.5) {
            cout << "Classification: Underweight" << endl;
        } else if (bodyMassIndex >= 18.5 && bodyMassIndex <= 24.9) {
            cout << "Classification: Normal weight" << endl;
        } else { //bmi >=25
            cout << "Classification: Overweight" << endl;
        }
    }

    cout << "\nBMI calculations complete. Goodbye!" << endl;
    return 0;
}
