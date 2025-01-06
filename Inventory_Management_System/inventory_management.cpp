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
        case 1:
        {
            // Declare Variables to accept data from user
            int day, product_n, warehouse_n, quan;
            string id;
            cout << "Enter Your ID: ";
            cin >> id;

            int index = -1; // Index of the Store keeper in our array
            for (int i = 0; i < s; i++)
            {
                // Search and find the index of the store keeper
                if (id == sk_id[i])
                {
                    index = i;
                    break;
                }
            }
            if (index == -1)
            {
                // If id not in database , show error message
                cout << "No Store Keeper with id \"" << id << "\"!\n";
                break;
            }

            // Validate and Accept Information about transaction 3 -Mash
            cout << "Hello " << sk_username[index] << "\nEnter date of transaction (1 - 30) : ";
            cin >> day;
            if (cin.fail() || day < 1 || day > 30)
            {
                cin.clear();
                cin.ignore();
                cout << "\nInvalid date! Date should be in the range 1 - 30.\n";
                break;
            }

            // Slips counts the number of slips passed in a day.
            int cont = 1, slips = 0; // Create a do while loop to accept multiple records.
            do
            {
                cout << "Enter Product Number(1 - 5): ";
                cin >> product_n;

                if (cin.fail() || product_n < 1 || product_n > 5)
                {
                    cin.clear();
                    cin.ignore();
                    cout << "\nInvalid Product number! Product Number should be in the range 1 - 30.\n";
                    break;
                }

                cout << "Enter Warehouse Number(1 - 4): ";
                cin >> warehouse_n;

                if (cin.fail() || warehouse_n < 1 || warehouse_n > 4)
                {
                    cin.clear();
                    cin.ignore();
                    cout << "\nInvalid warehouse! Warehouse number should be in the range 1 - 30.\n";
                    break;
                }

                cout << "Enter Quantity: ";
                cin >> quan;

                if (cin.fail() || quan < 0)
                {
                    cin.clear();
                    cin.ignore();
                    cout << "\nInvalid quantity!\n";
                    break;
                }

                // Set Quantity of product in warehouse to the input quantity.
                inventory[day - 1][index][product_n - 1][warehouse_n - 1] += quan;
                slips += 1;
                cout << "\nTransaction data added Successfully!\n";
                cout << "Do you want to enter another record?\n1. Yes\n2. No\n";
                cout << "Choice: ";
                cin >> cont;
    
            } while (cont == 1 && slips < 5); // If the store keeper doesnt excceed 5 slips.
            break;
        }
        case 2:
        {
            // Id of user and the date to edit records and an index to store index of storekeeper
            int day, ind = -1;
            string id2;
            
            cout << "\nEnter your storekeeper id: ";
            cin >> id2;

            for (int x = 0; x < s; x++)
            {
                // Search for the index of id
                if (id2 == sk_id[x])
                {
                    ind = x;
                    break;
                }
            }

            if (cin.fail() || ind == -1)
            {
                cin.clear();
                cin.ignore();
                // Display error message if id doesnt exist.
                cout << "\nError: No store Keeper with ID \"" << id2 << "\"!\n";
                break;
            }
            // Accept and validate new information
            cout << "\nEnter date to edit records: ";
            cin >> day;

            if (cin.fail() || day < 1 || day > 30)
            {
                cin.clear();
                cin.ignore();
                cout << "\nInvalid date!\n";
                break;
            }

            int pn, wn, q; // New data to input into records

            cout << "Enter Product Number: ";
            cin >> pn;

            if (cin.fail() || pn < 1 || pn > 5)
            {
                cin.clear();
                cin.ignore();
                cout << "\nInvalid Product number! Product Number should be in the range 1 - 30.\n";
                break;
            }

            cout << "Enter Warehouse Number: ";
            cin >> wn;

            if (cin.fail() || wn < 1 || wn > 4)
            {
                cin.clear();
                cin.ignore();
                cout << "\nInvalid warehouse! Warehouse number should be in the range 1 - 30.\n";
                break;
            }

            cout << "Enter New Quantity: ";
            cin >> q;

            if (cin.fail() || q < 0)
            {
                cin.clear();
                cin.ignore();
                cout << "\nInvalid quantity!\n";
                break;
            }
            // Update inventory and notify the user.
            inventory[day - 1][ind][pn - 1][wn - 1] = q;
            cout << "\nInventory Updated Successfully!\n";
            break;
        }
        case 3:
        {
            int c, date, pn, wn; // stores choice of user whether to delete all the record or a specific one
            string id;
            cout << "1. Delete a specific record \n2. Delete all records.\nChoice: ";
            cin >> c;
            // Accept and validate user's input
            if (cin.fail() || (c != 1 && c != 2))
            {
                cin.clear();
                cin.ignore();
                cout << "\nInvalid Input!\n";
                break;
            }

            if (c == 1)
            {
                cout << "Enter Your ID: ";
                cin >> id;

                int index = -1; // Index of the Store keeper in our array
                for (int i = 0; i < s; i++)
                {
                    // Search and find the index of the store keeper
                    if (id == sk_id[i])
                    {
                        index = i;
                        break;
                    }
                }
                if (index == -1)
                {
                    // If id not in database , show error message
                    cout << "No Store Keeper with id \"" << id << "\"!\n";
                    break;
                }
                // Accept and validate input from the user
                cout << "Enter the specifc date of the record you want to delete: ";
                cin >> date;

                if (cin.fail() || date < 1 || date > 30)
                {
                    cin.clear();
                    cin.ignore();
                    cout << "\nInvalid Input!\n";
                    break;
                }

                cout << "Product number of the product to delete: ";
                cin >> pn;


                if (cin.fail() || pn < 1 || pn > 5)
                {
                    cin.clear();
                    cin.ignore();
                    cout << "\nInvalid Input!\n";
                    break;
                }

                cout << "Enter warehouse number: ";
                cin >> wn;

                if (cin.fail() || wn < 1 || wn > 4)
                {
                    cin.clear();
                    cin.ignore();
                    cout << "\nInvalid Input!\n";
                    break;
                }

                inventory[date - 1][index][pn - 1][wn - 1] = 0;
            }
            else if (c == 2)
            {
                for (int l = 0; l < 30; l++)
                {
                    for (int m = 0; m < s; m++)
                    {
                        for (int n = 0; n < 5; n++)
                        {
                            for (int o = 0; o < 4; o++)
                            {
                                inventory[l][m][n][o] = 0;
                            }
                        }
                    }
                }
            }
            cout << "\nRecords deleted successfully!\n";
            break;
        }
        case 7:
        {
            string id;
            
            cout << "Enter your ID: ";
            cin >> id;
            
            int index = -1; // Index of the Store keeper in our array
            for (int i = 0; i < s; i++)
            {
                // Search and find the index of the store keeper
                if (id == sk_id[i])
                {
                    index = i;
                    break;
                }
            }
            if (index == -1)
            {
                // If id not in database , show error message
                cout << "No Store Keeper with id \"" << id << "\"!\n";
                break;
            }

            cout << "Welcome " << sk_username[index] << "!\n";
            int c; // accept what the user wants to do.

            cout << "1.View all storekeeper info.\n2.Edit username.\n3.Edit id.\nChoice: ";
            cin >> c;

            if (cin.fail() || (c != 3 && c != 1 && c != 2))
            {
                cin.clear();
                cin.ignore();
                cout << "\nError: invalid choice!\n";
                break;
            }
            if (c == 1)
            {
                cout << "ID\tUsername\n"; // Show info in table
                for (int r = 0; r < s; r++)
                {
                    cout << sk_id[r] << "\t" << sk_username[r] << endl;
                }
            }
            else if (c == 2)
            {
                cout << "\nEnter new username: "; // Accept and update new username
                cin >> sk_username[index];
                cout << "\nUsername updated successfully!\n";
            }
            else if (c == 3)
            {
                cout << "\nEnter new ID: ";
                cin >> sk_id[index];
                cout << "\nID updated successfully!\n"; // Accept and update new ID
            }
            break;
        }
        case 8:
        {
            cout << "\nExiting program!\nHave a wonderful day!\n";
            break;
        }
        case 6:
        {
            int day; // The day the user wants to view transaction report.

            cout << "Enter the day to see report: ";
            cin >> day;
            // Validate Date
            if (cin.fail() || day < 1 || day > 30)
            {
                cin.clear();
                cin.ignore();
                cout << "\nInvalid date! Date should be in the range 1 - 30.\n";
                break;
            }

            cout << "\nSales made by each storekeeper in each warehouse\n";
            cout << "\t\t";
            // Print Information on the date in tabular format
            for (int i = 0; i < s; i++)
            {
                cout << sk_username[i] << "\t";
            }
            cout << endl;
            for (int x = 0; x < 4; x++)
            {
                cout << "Warehouse " << (x + 1) << "\t";
                for (int y = 0; y < s; y++)
                {
                    int total_prod = 0;
                    for (int z = 0; z < 5; z++)
                    {
                        total_prod += inventory[day - 1][y][z][x];
                    }
                    cout << total_prod << "\t";
                }
                cout << endl;
            }
            break;
        }
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
