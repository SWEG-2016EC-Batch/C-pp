#include <iostream>
using namespace std;
int main()
{
    int cont = 1;
    while (cont == 1)
    {
        float capacity, miles_per_gallon, miles;

        cout << "Enter capacity(gallons) : ";
        cin >> capacity;

        cout << "Enter miles per gallon of fuel : ";
        cin >> miles_per_gallon;

        miles = capacity * miles_per_gallon;

        cout << "Number of miles that can be driven : " << miles << endl;

        cout << "Do you want to continue? Yes(1) or No(0) : ";
        cin >> cont;
    }
    return 0;
}