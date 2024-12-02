#include <iostream>
using namespace std;
int main()
{
    int cont = 1;
    while (cont == 1)
    {
        float capacity, miles_per_gallon, miles;
        int tryal = 0;

    a:
        cout << "Enter capacity(gallons) : ";
        cin >> capacity;

        if (cin.fail())
        {
            cin.clear();
            tryal += 1;
            if (tryal < 3)
            {
                cout << "Please enter a valid input !" << endl;
                goto a;
            }
            else
            {
                exit(0);
            }
        }

        b: 
        cout << "Enter miles per gallon of fuel : ";
        cin >> miles_per_gallon;

        if (cin.fail())
        {
            cin.clear();
            tryal += 1;
            if (tryal < 3)
            {
                cout << "Please enter a valid input !" << endl;
                goto b;
            }
            else
            {
                exit(0);
            }
        }

        miles = capacity * miles_per_gallon;

        cout << "Number of miles that can be driven : " << miles << endl;

        cout << "Do you want to continue? Yes(1) or No(0) : ";
        cin >> cont;
    }
    return 0;
}
