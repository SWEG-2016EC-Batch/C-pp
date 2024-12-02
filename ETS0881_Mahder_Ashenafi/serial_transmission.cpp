#include <iostream>
using namespace std;

int main()
{
    const double character = 960; // nuber of characters or bytes transferred per second since 1character = 1byte.
    long double mbyte;            // characters with in a single MB.
    const int hr_rate = 3600;
    const int min_rate = 60;
    const long int day_rate = 86400;
    double long time, file_size;
    long int day, min, hour, reminder, reminder2, reminder3;

    cout << "Enter file size (MB) = ";
    cin >> file_size;

    if (cin.fail() || file_size < 0)
    {
        cout << "Invalid input !" << endl;
        exit(0);
    }

    mbyte = file_size * 1024 * 1024;
    time = mbyte / character;

    int timer = time;

    day = timer / day_rate;
    reminder3 = timer % day_rate;
    hour = reminder3 / hr_rate;
    reminder = reminder3 % hr_rate;
    min = reminder / min_rate;
    reminder2 = reminder % min_rate;

    cout << endl;
    cout << "File of " << file_size << " MB needs " << day << "days : " << hour << "hr : " << min << "min : " << reminder2 << "s to be transferred." << endl;
    cout << "***********************************************************************" << endl;
    return 0;
}