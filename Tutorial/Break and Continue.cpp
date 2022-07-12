#include <iostream>
#include <string>
using namespace std;

//------------------------------------------
// Conitinue

int main(){
    int i = 1;
    for( ; i < 10 ; i++){

        if (i == 3){
            continue;
        }

        else if (i == 5){
            cout << "Hello" << endl;
            continue;
        }

        else if (i == 7){
            cout << "Hello World" << endl;
        }
        
        cout << i << endl;
    }
    return 0;
}

//------------------------------------------
// Break

int main(){
    int i = 1;
    for( ; i < 10 ; i++){

        if (i == 3){
            break;
        }

        else if (i == 5){
            cout << "Hello" << endl;
            continue;
        }

        else if (i == 7){
            cout << "Hello World" << endl;
        }

        cout << i << endl;
    }
    return 0;
}
