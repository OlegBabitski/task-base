#include <iostream>
using namespace std;

int main(){
    int a = 0, b = 0, c = 0;

    while(true){
        cout << "Enter the length of the three sides of the triangle" << endl;

        while(true){
            cout << "Entered the side -a- :";
            cin >> a;
            if(a > 0){
                break;
            }else{
                cout << "Side length cannot be negative!!! Try again . " << endl;
            }
        }
        while(true){
            cout << "Entered the side -b- :";
            cin >> b;
            if(b > 0){
                break;
            }else{
                cout << "Side length cannot be negative!!! Try again . " << endl;
            }
        }
        while(true){
            cout << "Entered the side -c- :";
            cin >> c;
            if(c > 0){
                break;
            }else{
                cout << "Side length cannot be negative!!! Try again . " << endl;
            }
        }

        if((a + b) > c and (a + c) > b and (c + b) > a){
            cout << "Great, such a triangle can exist." << endl;
            break;
        }else{
            cout << "Such a triangle cannot exist. Try entering other values." << endl;
        }
    }

    if(a == c and a == b and b == c){
        cout << "Equilateral triangle";
    }else if(a == c or a == b or b == c){
        cout << "Isosceles triangle";
    }else if((a * a == b * b + c * c) || (b * b == a * a + c * c) || (c * c == a * a + b * b)){
        cout << "Triangle rectangular";
    }else{
        cout << "Пeneral triangle";
    }   

   return 0;
}