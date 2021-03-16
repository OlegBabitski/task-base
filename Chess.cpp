#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int xOne = 0, xTwo = 0, yOne = 0, yTwo = 0;

    cout << "Enter the coordinates of the first shape" << endl;
    while(true){
        cout << "Enter the X coordinate : ";
        cin >> xOne;

        if(xOne > 0 and xOne < 9){
            break;
        } else{
            cout << "You entered incorrect values. Enter values ​​greater than 0 to 8" << endl;
        }
    }
    while(true){
        cout << "Enter the Y coordinate : ";
        cin >> yOne;

        if(yOne > 0 and yOne < 9){
            break;
        } else{
            cout << "You entered incorrect values. Enter values ​​greater than 0 to 8" << endl;
        }
    }

    cout << "Enter the coordinates of the second shape" << endl;
    while(true){
        while(true){
            cout << "Enter the X coordinate : ";
            cin >> xTwo;

            if(xTwo > 0 and xTwo < 9){
                break;
            } else{
                cout << "You entered incorrect values. Enter values ​​greater than 0 to 8" << endl;
            }
        }
        while(true){
            cout << "Enter the X coordinate : ";
            cin >> yTwo;

            if(yTwo > 0 and yTwo < 9){
                break;
            } else{
                cout << "You entered incorrect values. Enter values ​​greater than 0 to 8" << endl;
            }
        }

        if (xOne == xTwo and yOne == yTwo){
            cout << "Two shapes cannot have the same coordinates. Enter the coordinates of the second shape again !" << endl;
        } else{
            break;
        }
    }

    if ((abs(xOne - xTwo) == 1 and abs(yOne - yTwo) == 2) or (abs(xOne - xTwo) == 2 and abs(yOne - yTwo) == 1)){
        cout << "The figures beat each other";
    }else{
        cout << "Figures don't hit each other";
    } 

    return 0;
}

