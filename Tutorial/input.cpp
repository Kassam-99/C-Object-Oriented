/*
User Input in C++


You are already aware of how to output (print) values using cout.
To gather user input, we will now use cin.


The extraction operator (>>) is used to read data from the keyboard into the predefined variable cin.


The user can enter a number in the example below, and that value will be stored in the variable x.
The value of x is then printed: 
*/
int main(){
  int x; 
  cout << "Type a number: "; // Type a number and press enter
  cin >> x; // Get user input from the keyboard
  cout << "Your number is: " << x; // Display the input value
  return 0;
}

/*
Note:
"See-out" is how you pronounce cout.
employs the insertion operator (<<) and is used for output.


"See-in" is how you pronounce cin.
utilizes the extraction operator (>>) and is used as inp
*/
int main(){
  int x, y;
  int sum;
  cout << "Type a number: ";
  cin >> x;
  cout << "Type another number: ";
  cin >> y;
  sum = x + y;
  cout << "Sum is: " << sum; 
  return 0;
}
