#include <iostream>
using namespace std;
int main()
{
    float x, product;
    int y;
    int tryal = 0;
    product = 1;

a:
    cout << "Enter x: ";
    cin >> x;

    if (cin.fail())
    {
        cin.clear();
        tryal += 1;
        if (tryal <= 2)
        {
            cout << "Enter a valid value you have "
                 << 3 - tryal << " tries left." << endl;
            goto a;
        }
        else
        {
            exit(0);
        }
    }

b:
    cout << "Enter y: ";
    cin >> y;

    if (cin.fail())
    {
        cin.clear();
        tryal += 1;
        if (tryal <= 2)
        {
            cout << "Enter a valid value you have "
                 << 3 - tryal << " tries left." << endl;
            goto b;
        }
        else
        {
            exit(0);
        }
    }

    if (x == 0)
    {
        if (y <= 0)
        {
            cout << "Undefined" << endl;
            exit(0);
        }
        cout << "0 ^ " << y << " is 0" << endl;
    }
    if (y > 0)
    {
        for (int i = 0; i < y; i++)
        {
            product *= x;
        }
    }
    else if (y < 0)
    {
        for (int i = 0; i > y; i--)
        {
            product *= 1 / x;
        }
    }
    else
    {
        product = 1;
    }

    cout << x << "^" << y << " is " << product << endl;
}
