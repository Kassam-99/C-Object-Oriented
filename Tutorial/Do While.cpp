/*
The do/while loop is a variant of the while loop. 
Before determining whether the condition is true, this loop will run the code block once. If the condition is true, it will then repeat the loop.

int main(){
  do {
  // code block to be executed
  }
  while (condition);
  return 0;
}


*/
//----------------Example No.1----------------:
int main(){
    int i = 0;
    do {
        cout << i << "\n";
        i++;
    }
    while (i < 5);
    return 0;
}


//Do not forget to increase the variable used in the condition, otherwise the loop will never end.
int main(){
    int i = 0;
    do {
        cout << i << "\n";

    }
    while (i < 5);
    return 0;
}


