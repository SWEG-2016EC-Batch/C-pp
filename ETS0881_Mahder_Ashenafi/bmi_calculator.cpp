#include <iostream>
using namespace std;
int main()
{
    int cont = 1;
    while (cont == 1)
    {
        float bmi, height, weight;
        int tryal = 0;

    a:
        cout << "Enter Height: ";
        cin >> height;

        cout << "Enter Weight: ";
        cin >> weight;

        if (cin.fail())
        {
            cin.clear();
            tryal += 1;
            if (tryal <= 2)
            {
                cout << "Enter a valid height/weight! you have "
                     << 3 - tryal << " tries left." << endl;
                goto a;
            }
            else
            {
                exit(0);
            }
        }

        bmi = weight / (height * height);

        cout << "Your BMI is : " << bmi << endl;

        if (bmi < 18.5)
        {
            cout << "You are under weight." << endl;
        }
        else if (bmi >= 18.5 && bmi < 24.9)
        {
            cout << "You have a normal weight." << endl;
        }
        else
        {
            cout << "You are over weight." << endl;
        }

        cout << "Do you want to continue? Yes(1) or No(0) : ";
        cin >> cont;
    }
    return 0;
}