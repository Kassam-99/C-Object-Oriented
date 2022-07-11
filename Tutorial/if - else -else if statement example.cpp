#include <iostream>
#include <string>
using namespace std;
/*

The typical mathematical logical conditions are supported by C++:
    Less than: a < b
    Less than or equal to: a <= b
    Greater than: a > b
    Greater than or equal to: a >= b
    Equal to a == b
    Not Equal to: a != b
    
These criteria can be used to do various actions for various choices.

The following conditional statements can be used in C++:

If you want to tell a block of code to run only if a certain condition is true, use the if statement.

If the same condition is false, use else to describe a block of code that should be executed.

If the first condition is false, use else if to define a new condition to test. 
    
*/

int main()
{
    int day;
    cout << "Enter a number from 1 to 7: ";
    cin >> day;
    if(day == 1){
        cout << "Monday" << endl;
    }

    else if(day == 2){
        cout << "Tuseday" << endl; 
    }

    else if(day == 3){
        cout << "Wednesday" << endl;
    }

    else if(day == 4){
        cout << "Thursday" << endl;
    }

    else if(day == 5){
        cout << "Friday" << endl;
    }

    else if(day == 6){
        cout << "Saturday" << endl;
    }

    else if(day == 7){
        cout << "Sunday" << endl;
    }

    else{
        cout << "Hello World" << endl;
    }
    
    return 0;
}
