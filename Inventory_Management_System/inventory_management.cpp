#include <iostream>
#include <string>
using namespace std;
int main()
{
    const int s = 4;
    int tryal = 0; // number of store keepers and number of tries

    string sk_id[s];
    string sk_username[s]; // Store Information about Store keepers ID and Username
    for (int j = 0; j < s; j++)
    {
    // Accept store keeper information
    u:
        cout << "Enter ID of Store Keeper " << (j + 1) << " : ";
        cin >> sk_id[j];

        for (int r = 0; r < j; r++) // Check if there is a duplicate id.
        {
            // If there is already the same ID for another store keeper, give another chance.
            if (sk_id[r] == sk_id[j])
            {
                cin.clear();
                cin.ignore();
                cout << "There is already another storekeeper with ID (" << sk_id[j] << ")!\n";
                goto u;
            }
        }

        cout << "Enter username of Store Keeper " << (j + 1) << " : ";
        cin >> sk_username[j];
    }
    // Declare database of records and initialize values to 0
    float price[5] = {11.0, 23.0, 31.5, 45.0, 51.5}; // Declare array to store price of each product
    // 30 - days, s - store keepers, 5 - products,  4 - warehouse
    int inventory[30][s][5][4] = {0};
    int choice;
    do
    {
    // Display Menu for user
    c:
        cout << "\n===============================";
        cout << "\nInventory Management System \n\n";
        cout << "1. Add Transaction Data.\n";
        cout << "2. Edit records.\n";
        cout << "3. Delete Transaction Data.\n";
        cout << "4. Search for a record.\n";
        cout << "5. Summary of the month.\n";
        cout << "6. Daily Warehouse Transaction Report.\n";
        cout << "7. Store keeper Records.\n";
        cout << "8. Exit.\n";
        cout << "===============================\n";
        cout << "Choice: ";
        cin >> choice;
        if (cin.fail())
        {
            // Validate choice of user.
            if (tryal < 3)
            {
                cin.clear();
                cin.ignore();
                tryal++;
                cout << "Please enter a valid input!\n";
                goto c;
            }
            else
            {
                cout << "Maximum tries reached. Program Terminating! \n";
                exit(0);
            }
        }
        switch (choice)
        {

        default:
        {
            // Display error message if choice is invalid.
            cout << "Invalid Input! Please enter an integer (1 - 8).";
            break;
        }
        }
    } while (choice != 8);
    return 0;
}
