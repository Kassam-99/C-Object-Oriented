/*
The while loop loops through a block of code as long as a specified condition is true:


int main()
{
    while (condition )
    {
        code
        change
    }

}


When a certain condition is met, a block of code can be executed by a loop.


Loops are useful because they speed up programming, lower mistake rates, and improve readability. 

  
*/

//--------------Example No.1--------------:
int main()
{
    int i = 0;
    while (i < 5) {
        cout << i << "\n";
        i++;
    }
    
//Keep in mind that failing to raise the variable utilized in the condition will result in an endless loop.
    
}
