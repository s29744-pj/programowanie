#include <iostream>
using namespace std;

int main()
{
    
    int a, b;


    cout << "Podaj liczbe a: ";
    cin >> a;

    cout << "Podaj liczbe b: ";
    cin >> b;

    cout << "Pobrano liczby a == " << a << " oraz b == " << b;

    cout << endl;
    cout << endl;

    cout << "Wiersz o dlugosci a: ";

    for (int i = 1; i <= a; i++) {
        cout << "*";
    }

    cout << endl;
    cout << endl;

    cout << "Kolumna o dlugosci b: " << endl;;

    for (int i = 1; i <= b; i++) {
        cout << "*" << endl;
    }

    cout << endl;
    cout << endl;

    cout << "Prostokat gwiazdek o wymiarach  'a' na 'b': ";
    cout << endl;
    for (int i = 1; i <= a; i++) {
        for (int j = 1; j <= b; j++) {


            cout << "*";
        }
        cout << endl;
    }

    cout << endl;
    cout << endl;


    cout << "Obwod prostokatu o wymiarach 'a' na 'b'";
    cout << endl;

    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            if (i == 0 || i == a - 1 || j == 0 || j == b - 1) {
                cout << "*";
            }
            else {
                cout << "";
            }
        }
        cout << endl;
    }

    cout << endl;
    cout << endl;



    cout << "Trojkat prostokatny rownoramienny: ";

        for (int i = 1; i <= a; i++) {
            for (int j = 1; j <= i; j++) {
                std::cout << "*";
            }
            cout << endl;
        }



        cout << "Trojkat prostokatny rownoramienny na odwrot : ";

        for (int i = a; i >= 1; i--) {
            for (int j = 1; j <= i; j++) {
                std::cout << "*";
            }
            cout << endl;
        }



}


