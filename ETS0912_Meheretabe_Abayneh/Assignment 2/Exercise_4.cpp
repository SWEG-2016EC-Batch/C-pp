#include <iostream>
using namespace std;

int main() {
    int row, column, choice, cont;
do{
    cout << "Enter number of rows: ";
    cin >> row;
    cout << "Enter number of columns: ";
    cin >> column;
    cout << "1: Rectangle of numbers \n";
    cout << "2: Rectangle of upper case Alphabets \n";
    cout << "3: Half pyramid of numbers \n";
    cout << "4: Inverted half pyramid of numbers \n";
    cout << "5: Half pyramid of Alphabets \n";
    cout << "6: Rectangle of lower case Alphabets \n";
    cout << "7: Hallow Rectangle of stars \n";
    cout << "8: Inverted half pyramid of stars \n";
    cout << "9: Hallow inverted half pyramid of stars \n";
    cout << "10: Full pyramid \n";
    cout << "11: Inverted full pryamid \n";
    cout << "12: Hallow full pyramid \n";
    cout << endl;
    cout << "Enter the choice of pattern: ";
    cin >> choice;

    switch (choice) {
        case 1:
            for (int i = 1; i <= row; i++) {
                for (int j = 1; j <= column; j++) {
                    cout << j << " ";
                }
                cout << endl;
            }
            break;

        case 2: {
            char letter = 'A';
            for (int i = 1; i <= row; i++) {
                for (int j = 1; j <= column; j++) {
                    cout << letter << " ";
                    if (letter == 'Z')
                    {
                        break;
                    }
                    letter++;
                }
                cout << endl;
            }
            break;
        }

        case 3:
            for (int i = 1; i <= row; i++) {
                for (int j = 1; j <= i; j++) {
                    cout << j << " ";
                }
                cout << endl;
            }
            break;

        case 4:
            for (int i = 1; i <= row; i++) {
                for (int k = row - i; k >= 1; k--) {
                    cout << "  ";
                }
                for (int j = i; j >= 1; j--) {
                    cout << j << " ";
                }
                cout << endl;
            }
            break;

        case 5:
            for (int i = 1; i <= row; i++) {
                char letter = 'A';
                for (int j = 1; j <= i; j++) {
                    cout << letter << " ";
                    letter++;
                }
                cout << endl;
            }
            break;

        case 6:
            for (int i = 1; i <= row; i++) {
                char letter = 'a';
                for (int j = 1; j <= column; j++) {
                    cout << letter << " ";
                    letter++;
                }
                cout << endl;
            }
            break;

        case 7:
            for (int i = 1; i <= row; i++) {
                for (int j = 1; j <= column; j++) {
                    if (i == 1 || i == row || j == 1 || j == column) {
                        cout << "* ";
                    } else {
                        cout << "  ";
                    }
                }
                cout << endl;
            }
            break;

        case 8:
            for (int i = 1; i <= row; i++) {
                for (int j = row; j >= i; j--) {
                    cout << "* ";
                }
                cout << endl;
            }
            break;

        case 9:
            for (int i = 1; i <= row; i++) {
                for (int j = row; j >= i; j--) {
                    if (i == 1 || j == row || i == j) {
                        cout << "* ";
                    } else {
                        cout << "  ";
                    }
                }
                cout << endl;
            }
            break;

        case 10:
            for (int i = 1; i <= row; i++) {
                for (int k = row - i; k >= 1; k--) {
                    cout << " ";
                }
                for (int j = 1; j <= i; j++) {
                    cout << "* ";
                }
                cout << endl;
            }
            break;

        case 11:
            for (int i = 1; i <= row; i++) {
                for (int k = 1; k <= i; k++) {
                    cout << " ";
                }
                for (int j = row; j >= i; j--) {
                    cout << "* ";
                }
                cout << endl;
            }
            break;

        case 12:
            for (int i = 1; i <= row; i++) {
                for (int k = row - i; k >= 1; k--) {
                    cout << " ";
                }
                for (int j = 1; j <= i; j++) {
                    if (i == 1 || j == 1 || j == i || i == row) {
                        cout << "* ";
                    } else {
                        cout << "  ";
                    }
                }
                cout << endl;
            }
            break;

        default:
            cout << "Invalid choice" << endl;
            break;
    }
cout << endl;
cout << "Press 1 to continue 0 to exit ";
cin >> cont;
cout <<endl;

} while(cont == 1);
cout << endl;
cout << "Thank you !!!";

    return 0;
}
