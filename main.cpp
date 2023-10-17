// Sven Reyes
// basic calculator 
#include <cmath>
#include <iostream>

using namespace std;

int main()
{
    char opt, a, b;    // create character variable for each operation
    float num1, num2, result;
    while(1)  // loop indefinitely until user chooses to quit
    {
        cout << "Please select from the menu" << endl; // create calculator menu
        cout << "1. Addition\n" ;  //Displays menu options and prompts user for their selection
        cout << "2. Subtraction\n" ;
        cout << "3. Multiplication\n" ;
        cout << "4. Division\n" ;
        cout << "5. Quit\n" ;
        cin >> opt;  // read user's choice from standard input
    
        if (opt == '5') { // if user chose option 5, exit the loop
            cout << "Exiting program..." << endl;
            break;
        }

        cout << "Please enter two operands: ";
        cin >> a >> b; // read the two operands from standard input

        switch(opt) // perform calculation based on user's choice
        {
            case '1' :
                result = a + b ;
                cout << a << " + " << b << " = " << result << endl ;
                break ;
            case '2' :
                result = a - b ;
                cout << a << " - " << b << " = " << result << endl ;
                break ;
            case '3' :
                result = a * b ;
                cout << a << " * " << b << " = " << result << endl;
                break ;
            case '4' :
                result = a / b ;
                cout << a << " / " << b << " = " << result << endl;
                break ;
            default :
                cout << "You entered the wrong number from the menu!" << endl;
                break ;
        }
    }
    return 0;
}
