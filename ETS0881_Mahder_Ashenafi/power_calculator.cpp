#include <iostream>
using namespace std;
int main()
{
    int x, y, product;
    product = 1;

    cout << "Enter x: ";
    cin >> x;

    cout << "Enter y: ";
    cin >> y;

    for (int i = 0; i < y;i++)
    {
        product *= x;
    }

    cout << x <<"^"<< y << " is " <<product << endl;
}