#include <iostream>
using namespace std;

int main() {
    int a;
    int sum = 0;
    
    cout << "Podaj liczbe szukanego zbioru: ";
    cin >> a;

    for (int i = 1; i <= a; i++) {
        int pomoc = 0;
        for (int j = 1; j <= i; j++) {
            pomoc = pomoc + j;
        }
        sum = sum + pomoc;
    }

    cout << "suma wynosi " << sum;
    return 0;
}