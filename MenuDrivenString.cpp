#include <iostream>
#include <string>
#include <cstring>

using namespace std; 

/* Jimmy Pham
*  T00629354
*  COMP 3141
*  Module 5 Question 2
*/

int main() {
    string input;
    string str1, str2;
    int choice;

    while (true) { //menu options
        cout << endl << "Menu:" << endl;
        cout << "1. Input a string" << endl;
        cout << "2. Reverse a string" << endl;
        cout << "3. Compare two strings" << endl;
        cout << "4. Concatenate two strings" << endl;
        cout << "5. Quit" << endl;
        cout << "Enter your choice: " <<endl;
        cin >> choice;

        switch (choice) { //switch statement for choosing options
        case 1:
            cout << "Enter a string: ";
            cin.ignore(); 
            getline(cin, input);
            break;

        case 2:
            cout << "Reversed string: ";
            for (int i = input.length() - 1; i >= 0; i--) {
                cout << input[i];
            }
            cout << endl;
            break;

        case 3:
            cout << "Enter two strings for comparison:" << endl;
            cin.ignore();
            getline(cin, str1);
            getline(cin, str2);
            if (str1 == str2) 
            {
                cout << "The two strings the same." << endl;
            } else {
                cout << "The two strings are not the same." << endl;
            }
            break;

        case 4:
            cout << "Enter two strings for concatenation:" << endl;
            cin.ignore();
            getline(cin, str1);
            getline(cin, str2);
            cout << "Concatenated string: " << str1 + str2 << endl;
            break;

        case 5:
            cout << "Exiting the program." << endl;
            return 0;

        default:
            cout << "Invalid choice. Please select a valid option." << endl;
        }
    }

    return 0;
}
