#include <iostream>
#include <string>
using namespace std;


// Use the switch statement to select one of many code blocks to be executed.
/*
The process is as follows:

One evaluation of the switch expression is done.

The expression's value and the values in each scenario are contrasted.

The corresponding piece of code is run if there is a match.

The default and break keywords are not required.

C++ exits the switch block when it encounters the break keyword. 

*/


int main()
{
    int word;
    cout << "Enter a number from 1 to 7: ";
    cin >> word;
    switch (word)
    {
    case 1:
    cout << "Hello" << endl;
        break;

    case 2:
    cout << "Welcome" << endl; 
        break;

    case 3:
    cout << "We Love C++" << endl;
        break;

    case 4:
    cout << "Hi" << endl;
        break;

    case 5:
    cout << "Let's code" << endl;
        break;

    case 6:
    cout << "Never Mind " << endl;
        break;

    case 7:
    cout << "College" << endl;
        break;

    default:
    cout << "Hello World" << endl;
        break;
    }

    return 0;

}
