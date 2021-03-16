#include <iostream>
using namespace std;

int main(){
    double fractionalNumber = 0.0;
    int result = 0;   

    cout << "Enter number : ";
    cin >> fractionalNumber;
    
    fractionalNumber = fractionalNumber * 10;
    result = fractionalNumber;
    result = result % 10;
    cout << result; 
 
    return 0;
}
