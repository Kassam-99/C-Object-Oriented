#include <iostream>
#include <string>
using namespace std;
/*
C++ supports the usual logical conditions from mathematics:

    Less than: a < b
    Less than or equal to: a <= b
    Greater than: a > b
    Greater than or equal to: a >= b
    Equal to a == b
    Not Equal to: a != b

You can use these conditions to perform different actions for different decisions.

C++ has the following conditional statements:

    Use if to specify a block of code to be executed, if a specified condition is true
    Use else to specify a block of code to be executed, if the same condition is false
    Use else if to specify a new condition to test, if the first condition is false
    Use switch to specify many alternative blocks of code to be executed
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
