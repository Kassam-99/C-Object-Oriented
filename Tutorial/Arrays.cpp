/*
>> Arrays: are employed to combine numerous values into a single variable rather of defining separate variables for each value. 
>> There are 3 types of an array in C++ :

    One-dimensional array. 
    Two-dimensional array.
    Three-dimensional array.
 -----------------------------------------------------------------------
 
 >> One-dimensional array looks like: [Row]
 string countries[4] = {"USA", "UAE", "UK", "Russia"};
 
 int numbers[3] = {3, 33, 333};
 
 
 >> Two-dimensional array looks like: [Row][Column]
 int  test[2][3] = { {2, 4, 5}, {9, 0, 19}};
 
 int  test[2][3] = { 
                   {2, 4, 50},
                   {9, 0, 19}
                   };
 
 >> Three-dimensional array looks like: [Row][Column]
int test[2][3][4] = { 
                     { {3, 4, 2, 3}, {0, -3, 9, 11}, {23, 12, 23, 2} },
                     { {13, 4, 56, 3}, {5, 9, 3, 5}, {5, 1, 4, 9} }
                 };
                 
                 
int test[2][3][2] = {
                          {
                              {1, 2},
                              {3, 4},
                              {5, 6}
                           }, 
                           {
                              {7, 8}, 
                              {9, 10}, 
                              {11, 12}
                           }
                    };
                    
*/


//-------------------------------------------------------------------------------------------
// Access the Elements of an Array:
#include <iostream>
#include <string>
using namespace std;                     //Output: USA

int main() {
  string countries[4] = {"USA", "UAE", "UK", "Russia"};
  cout << countries[0];
  return 0;
}


//-------------------------------------------------------------------------------------------
// Change an Array Element:
#include <iostream>
#include <string>
using namespace std;                     //Output: France

int main() {
  string countries[4] = {"USA", "UAE", "UK", "Russia"};
  cout << countries[0]="France";
  cout << countries[0];
  return 0;
}


//-------------------------------------------------------------------------------------------
// Change Elements in a Multi-Dimensional Array:
#include <iostream>
using namespace std;

int main() {
  string letters[2][4] = {
    { "A", "B", "C", "D" },
    { "E", "F", "G", "H" }
  };
  letters[0][0] = "Z";
  
  cout << letters[0][0];
  return 0;
}


//-------------------------------------------------------------------------------------------
// Loop Through an 1D Array:
#include <iostream>
#include <string>
using namespace std;                     

int main() { 
  // Loop for Outputs
  string countries[4] = {"USA", "UAE", "UK", "Russia"};
  for(int i=0; i<4; i++)
    cout << countries[i] << endl;
  return 0;
}

//-------

int main(){ 
  //Loop fo Inputs:
  string countries[4];
  for(int i=0; i<4; i++){
    cin >> countries[i];
    }
  return 0;
}


//-------------------------------------------------------------------------------------------
//Loop Through an 2D Array:
#include <iostream>
#include <string>
using namespace std;;

int main() {
  // Loop for Outputs
  string letters[2][4] = {
  { "A", "B", "C", "D" },
  { "E", "F", "G", "H" }
};
  
  for(int i=0; i<2; i++){
    for(int j=0; j<4; j++){
      cout << letters[i][j];
    }
  }
  
  return 0;
}

//-------

int main() {
  // Loop for Inputs
  string letters[2][4];
  for(int i=0; i<2; i++){
    for(int j=0; j<4; j++){
      cin >> letters[i][j];
    }
  }
  
  return 0;
}


//--------------------------------------------------------------------------------------------
//Loop Through an 3D Array:

#include <iostream>
using namespace std;

int main() {
    // This array can store upto 12 elements (2x3x2) Output
    int test[2][3][2] = {
                            {
                                {1, 2},
                                {3, 4},
                                {5, 6}
                            }, 
                            {
                                {7, 8}, 
                                {9, 10}, 
                                {11, 12}
                            }
                        };

    // Displaying the values with proper index.
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 3; ++j) {
            for (int k = 0; k < 2; ++k) {
                cout << "test[" << i << "][" << j << "][" << k << "] = " << test[i][j][k] << endl;
            }
        }
    }

    return 0;
}

//-----------------
int main() {
    // This array can store upto 12 elements (2x3x2) Output
    int test[2][3][2];

    // Displaying the values with proper index.
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 3; ++j) {
            for (int k = 0; k < 2; ++k) {
                cin >> test[i][j][k];
            }
        }
    }

    return 0;
}

//-------------------------------------------------------------------------------------------
// Omit Array Size:
#include <iostream>
#include <string>
using namespace std;
// The array will reserve the additional space if you specify the size: 
int main() {
  string cars[5] = {"Volvo", "BMW", "Ford"};
  cars[3] = "Mazda";
  cars[4] = "Tesla";
  for(int i = 0; i < 5; i++) {
    cout << cars[i] << "\n";
  }
  return 0;
}

// Another option is to declare an array without identifying all of its items and then add them later: 
#include <iostream>
#include <string>
using namespace std;

int main() {
  string cars[5];
  cars[0] = "Volvo";
  cars[1] = "BMW";
  cars[2] = "Ford";
  cars[3] = "Mazda";
  cars[4] = "Tesla";
  for(int i = 0; i < 5; i++) {
    cout << cars[i] << "\n";
  }
  return 0;
}



// It is not necessary to define the array's size. If you don't, though, it will only be as large as the components that are added to it:
// string countries[] = {"USA", "UAE", "UK", "Russia"};
// This is perfectly OK. The issue arises, though, if you need additional room for later components. Then you must replace the current values: 
// string cars[] = {"Volvo", "BMW", "Ford"};
// string cars[] = {"Volvo", "BMW", "Ford", "Mazda", "Tesla"};

//-------------------------------------------------------------------------------------------
// Get the Size of an Array:
// To get the size of an array, you can use the sizeof() operator:
// sizeof() operator returns the size of a type in bytes.
#include <iostream>
using namespace std;

int main() {
  int numbers[5] = {10, 20, 30, 40, 50};
  cout << sizeof(numbers);
  return 0;
}

// int type is typically 4 bytes; so, 4 x 5 (4 bytes x 5 items) = 20 bytes from the example above. 
#include <iostream>
using namespace std;

int main() {
  int myNumbers[5] = {10, 20, 30, 40, 50};
  int getArrayLength = sizeof(myNumbers) / sizeof(int);
  cout << getArrayLength;
  return 0;
}
