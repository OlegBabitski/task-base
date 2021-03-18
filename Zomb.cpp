#include <iostream>
using namespace std;

int main(){
    int m = 0, n = 0, result = 0, counter = 0, dailyGain = 0;
    double p = 0.0;

    cout << "Enter the number of mutants" << " : ";
    cin >> m;
    cout << "Enter the percentage of mutants multiplying" << " : ";
    cin >> p;
    cout << "How many mutants do communalists kill?" << " : ";
    cin >> n;

    p = p / 100;
    dailyGain = m * p;

    for (m; m > 1; m += m * p){     
        if (dailyGain > n){
            cout << "Zombies win :("; 
            break;
        }

        dailyGain = m * p;
        m = m - n;
        counter++;
    }

    if (counter){
        cout << "To defeat zombies, you will need " << counter << " days";
    } 

    return 0;
}