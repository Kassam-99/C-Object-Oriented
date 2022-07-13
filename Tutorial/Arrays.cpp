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


--------------------------------------------------------------------------
// Access the Elements of an Array:
#include <iostream>
#include <string>
using namespace std;                     //Output: USA

int main() {
  string countries[4] = {"USA", "UAE", "UK", "Russia"};
  cout << countries[0];
  return 0;
}


--------------------------------------------------------------------------
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

--------------------------------------------------------------------------
//Loop Through an 1D Array:
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


--------------------------------------------------------------------------
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



