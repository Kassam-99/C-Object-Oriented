/*

When you know exactly how many times you want to loop through a block of code, use the for loop instead of a while loop:

Initialization => statement 1
Condition => statement 2
Update => statement 3


for (statement 1; statement 2; statement 3) {
  // code block to be executed
}

Prior to the execution of the code block, statement 1 is run (one).

The prerequisite for running the code block is stated in statement two.

Following the execution of the code block, Statement 3 is executed (each time). 
*/

#include <iostream>
#include <string>
using namespace std;



//-----------Example No.1------------:
int main()
{


    for (int i=0; i<5; i = i + 1){ 
        cout << "Hello World"  << endl;     
        }

}

/*
Before the loop begins, statement 1 sets a variable (int i = 0).

Statement 2 specifies the prerequisites for the loop's operation (i must be less than 5).
The loop will repeat itself if the condition is true and come to an end if it is false.

With each iteration of the loop's code block, statement 3 raises a value (i++). 
*/


//-----------Example No.2------------:
int main()
{

  
    for (int i=0; i<5; i = i + 1){ 
        cout << "Hello World"  << endl;     
        }

}




//-----------Example No.3------------:
int main()
{


    for (int i=1; i<5; ++1){ 
        cout << "Hello World"  << endl;     
        }

}




//-----------Example No.4------------:
int main()
{


    for (int i=-1; i<5; i = i + 1){ 
        cout << "Hello World"  << endl;     
        }

}
