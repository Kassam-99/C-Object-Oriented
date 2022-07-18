/*
Structures (also called structs) are  a method for putting a number of connected variables in one place.
A member of the structure is referred to as each variable in it.
A structure, as opposed to an array, can hold a wide variety of data types (int, string, bool, etc.). 

*/

//----------Create and Access a structure:----------
#include <iostream>
#include <string>
using namespace std;

int main() {
   //To create a structure, use the struct keyword and declare each of its members inside curly braces.
  struct {             // Structure declaration.
    int myNum;         // Member (int variable).
    string myString;   // Member (string variable).
  } myStructure;       // Structure variable.

  myStructure.myNum = 1;
  myStructure.myString = "Hello World!";

  cout << myStructure.myNum << "\n";
  cout << myStructure.myString << "\n";
  return 0;
}


//----------One Structure in Multiple Variables----------
struct {
  string brand;
  string model;
  int year;
} myCar1, myCar2; // We can add variables by separating them with a comma here

// Put data into the first structure
myCar1.brand = "BMW";
myCar1.model = "X5";
myCar1.year = 1999;

// Put data into the second structure
myCar2.brand = "Ford";
myCar2.model = "Mustang";
myCar2.year = 1969;

// Print the structure members
cout << myCar1.brand << " " << myCar1.model << " " << myCar1.year << "\n";
cout << myCar2.brand << " " << myCar2.model << " " << myCar2.year << "\n";


//----------Named Structures:----------
// Declare a structure named "car"
struct car {
  string brand;
  string model;
  int year;
};

int main() {
  // Create a car structure and store it in myCar1;
  car myCar1;
  myCar1.brand = "BMW";
  myCar1.model = "X5";
  myCar1.year = 1999;

  // Create another car structure and store it in myCar2;
  car myCar2;
  myCar2.brand = "Ford";
  myCar2.model = "Mustang";
  myCar2.year = 1969;
 
  // Print the structure members
  cout << myCar1.brand << " " << myCar1.model << " " << myCar1.year << "\n";
  cout << myCar2.brand << " " << myCar2.model << " " << myCar2.year << "\n";
 
  return 0;
}
