#include <iostream>
#include <string>
using namespace std;


// Use the switch statement to select one of many code blocks to be executed.
/*
This is how it works:
    The switch expression is evaluated once.
    The value of the expression is compared with the values of each case.
    If there is a match, the associated block of code is executed.
    The break and default keywords are optional.
    
    
When C++ reaches a break keyword, it breaks out of the switch block.
The example below:
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
