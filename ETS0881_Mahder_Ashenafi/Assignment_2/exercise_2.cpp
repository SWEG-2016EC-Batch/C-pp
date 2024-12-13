#include <iostream>
using namespace std;
int main()
{
    int cont = 1;
    while (cont == 1)
    {
        int test, sum_ = 0, project, quiz, assignment, final_, total;
        cout << "Please enter results for the following assessments: \n";
        cout << "Test(15%): ";
        cin >> test;
        cout << "Quiz(5%): ";
        cin >> quiz;
        cout << "Project(20%): ";
        cin >> project;
        cout << "Assignment(10%): ";
        cin >> assignment;
        cout << "Final(50%): ";
        cin >> final_;

        total = test + quiz + project + assignment + final_;

        if (total > 100 || total < 0)
        {
            cout << "Error Invalid assesement result! ";
            exit(0);
        }

        if (total >= 90)
        {
            cout << "Total Mark is : " << total << endl;
            cout << "Grade letter is : " << "A+ \n";
        }
        else if (total >= 80)
        {
            cout << "Total Mark is : " << total << endl;
            cout << "Grade letter is : " << "A\n";
        }
        else if (total >= 75)
        {
            cout << "Total Mark is : " << total << endl;
            cout << "Grade letter is : " << "B+ \n";
        }
        else if (total >= 60)
        {
            cout << "Total Mark is : " << total << endl;
            cout << "Grade letter is : " << "B \n";
        }
        else if (total >= 55)
        {
            cout << "Total Mark is : " << total << endl;
            cout << "Grade letter is : " << "C+ \n";
        }
        else if (total >= 45)
        {
            cout << "Total Mark is : " << total << endl;
            cout << "Grade letter is : " << "C \n";
        }
        else if (total >= 30)
        {
            cout << "Total Mark is : " << total << endl;
            cout << "Grade letter is : " << "D \n";
        }
        else
        {
            cout << "Total Mark is : " << total << endl;
            cout << "Grade letter is : " << "F \n";
        }

        cout << "Do you want to calculate another grade? Yes(1) or No(any other key): ";
        cin >> cont;
    }
    return 0;
}
