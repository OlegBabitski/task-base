#include <iostream>
using namespace std;

int main(){
    int numberOne = 0, numberTwo = 0, i = 0, result = 0;

    while(true){
        cout << "Entered first number:";
        cin >>  numberOne;

        if (numberOne > 0){
            break;
        } else{
            cout << "You entered an invalid value. Try again!" << endl; 
        }
    }
    while(true){
        cout << "Entered second number:";
        cin >>  numberTwo;

        if (numberTwo > 0){
            break;
        }else{
            cout << "You entered an invalid value. Try again!" << endl; 
        }
    }
    
    if (numberOne > numberTwo){
        i = numberOne;
    } else{
        i = numberTwo;
    }

    for (; ; i++){
        if (i % numberOne == 0 and i % numberTwo == 0){
            cout << "Least common multiple equals " << i;
            break;
        }
    }
    
    return 0;
}