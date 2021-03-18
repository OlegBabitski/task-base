#include <iostream>
using namespace std;

int main(){
    int numberOne = 0, numberTwo = 0, num = 1;

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
        num = numberOne;
    } else{
        num = numberTwo;
    }

    while (true){
    	num++;
    	
        if (num % numberOne == 0 and num % numberTwo == 0){
            cout << "Least common multiple equals " << num;
            
            break;
        }
	}
    return 0;
}
