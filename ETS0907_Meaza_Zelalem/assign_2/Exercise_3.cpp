#include <iostream>
using namespace std;

int main()
{
    int number, tryal = 0;

a:
    cout << "Please enter your integer number: ";
    cin >> number;

    if (cin.fail())
    {
        cin.clear();
        cin.ignore();
        if (tryal < 3)
        {
            cout << "Error: please enter an integer number!" << endl;
            tryal += 1;
            goto a;
        }
        else
        {
            return 0;
        }
    }

    int task;
b:
    cout << "\nMenu:\n";
    cout << "1. Print reverse of the number\n";
    cout << "2. Count the number of digits\n";
    cout << "3. Find the product of even digits\n";
    cout << "4. Print first and last digit and their sum\n";
    cout << "5. Swap first and last digit\n";
    cout << "6. Check if the number is a palindrome\n";
    cout << "7. Find the frequency of each digit\n";
    cout << "8. Check if the number is a Strong number\n";
    cout << "9. Check if the number is a Perfect number\n";
    cout << "Enter your choice (or any other number to exit): ";
    cin >> task;

    if (cin.fail())
    {
        cin.clear();
        cin.ignore();
        if (tryal < 3)
        {
            cout << "Error: please enter an integer number!" << endl;
            tryal += 1;
            goto b;
        }
        else
        {
            return 0;
        }
    }
    switch (task)
    {
    case 1:
    {
        int reversed = 0, temp = number;
        while (temp > 0)
        {
            int digit = temp % 10;
            reversed = reversed * 10 + digit;
            temp /= 10;
        }
        cout << "Reversed number: " << reversed << endl;
        break;
    }
    case 2:
    {
        int count = 0, temp = number;
        while (temp > 0)
        {
            count++;
            temp /= 10;
        }
        cout << "Number of digits: " << count << endl;
        break;
    }
    case 3:
    {
        int ans = 1;
        int temp = number;
        while (temp > 0)
        {
            int digit = temp % 10;
            if (digit % 2 == 0)
            {
                ans *= digit;
            }
            temp /= 10;
        }
        if (ans != 1)
        {
            cout << "Product of even digits: " << ans << endl;
        }
        else
        {
            cout << "No even digits in the number." << endl;
        }
        break;
    }
    case 4:
    {
        int temp = number, lastDigit = temp % 10;
        while (temp >= 10)
        {
            temp /= 10;
        }
        int firstDigit = temp;
        cout << "First digit: " << firstDigit << ", Last digit: " << lastDigit << endl;
        cout << "Sum of first and last digit: " << (firstDigit + lastDigit) << endl;
        break;
    }
    case 5:
    {
        int temp = number, lastDigit = temp % 10, placeValue = 1;
        while (temp >= 10)
        {
            temp /= 10;
            placeValue *= 10;
        }
        int firstDigit = temp;
        int swappedNumber = number - (firstDigit * placeValue) - lastDigit;
        swappedNumber += (lastDigit * placeValue) + firstDigit;
        cout << "Number after swapping first and last digit: " << swappedNumber << endl;
        break;
    }
    case 6:
    {
        int reversed = 0, temp = number;
        while (temp > 0)
        {
            int digit = temp % 10;
            reversed = reversed * 10 + digit;
            temp /= 10;
        }
        if (reversed == number)
            cout << "The number is a palindrome." << endl;
        else
            cout << "The number is not a palindrome." << endl;
        break;
    }
    case 7:
    {
        int temp = number, frequency[10] = {0};
        while (temp > 0)
        {
            int digit = temp % 10;
            frequency[digit]++;
            temp /= 10;
        }
        cout << "Digit Frequency Table:\n";
        for (int i = 0; i < 10; i++)
        {
            if (frequency[i] > 0)
                cout << "Digit " << i << ": " << frequency[i] << endl;
        }
        break;
    }
    case 8:
    {
        int temp = number, sumOfFactorials = 0;
        while (temp > 0)
        {
            int digit = temp % 10, factorial = 1;
            for (int i = 1; i <= digit; i++)
            {
                factorial *= i;
            }
            sumOfFactorials += factorial;
            temp /= 10;
        }
        if (sumOfFactorials == number)
            cout << "The number is a Strong number." << endl;
        else
            cout << "The number is not a Strong number." << endl;
        break;
    }
    case 9:
    {
        int sumOfDivisors = 0;
        for (int i = 1; i < number; i++)
        {
            if (number % i == 0)
                sumOfDivisors += i;
        }
        if (sumOfDivisors == number)
            cout << "The number is a Perfect number." << endl;
        else
            cout << "The number is not a Perfect number." << endl;
        break;
    }
    default:
        cout << "Program has exited. Have a great day! \n";
        return 0;
    }
    return 0;
}
