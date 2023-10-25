#include <iostream>
using namespace std;

int main()
{

	int number;

	cout << "Podaj liczbe z przedzialu <1;12>: ";
		cin >> number;
		cout << endl;

		if (number < 1 || number > 12) {

			cout << "liczba jest spoza przedziału liczbowego!!!";
			return 1;
		}
		else {

            switch (number) {
            case 1:
                cout << "Miesiac: Styczen" << std::endl;
                cout << "Liczba dni w miesiacu (nieprzestepnym): 31" << std::endl;
                cout << "W tym miesiacu jest pochmurno." << std::endl;
                break;
            case 2:
                cout << "Miesiac: Luty" << std::endl;
                cout << "Liczba dni w miesiacu (nieprzestepnym): 28" << std::endl;
                cout << "W tym miesiacu jest pochmurno." << std::endl;
                break;
            case 3:
                cout << "Miesiac: Marzec" << std::endl;
                cout << "Liczba dni w miesiacu (nieprzestepnym): 31" << std::endl;
                cout << "W tym miesiacu jest pochmurno." << std::endl;
                break;
            case 4:
                cout << "Miesiac: Kwiecien" << std::endl;
                cout << "Liczba dni w miesiacu (nieprzestepnym): 30" << std::endl;
                cout << "W tym miesiacu jest slonecznie." << std::endl;
                break;
            case 5:
                cout << "Miesiac: Maj" << std::endl;
                cout << "Liczba dni w miesiacu (nieprzestepnym): 31" << std::endl;
                cout << "W tym miesiacu jest slonecznie." << std::endl;
                break;
            case 6:
                cout << "Miesiac: Czerwiec" << std::endl;
                cout << "Liczba dni w miesiacu (nieprzestepnym): 30" << std::endl;
                cout << "W tym miesiacu jest slonecznie." << std::endl;
                break;
            case 7:
                cout << "Miesiac: Lipiec" << std::endl;
                cout << "Liczba dni w miesiacu (nieprzestepnym): 31" << std::endl;
                cout << "W tym miesiacu jest slonecznie." << std::endl;
                break;
            case 8:
                cout << "Miesiac: Sierpien" << std::endl;
                cout << "Liczba dni w miesiacu (nieprzestepnym): 31" << std::endl;
                cout << "W tym miesiacu jest slonecznie." << std::endl;
                break;
            case 9:
                cout << "Miesiac: Wrzesien" << std::endl;
                cout << "Liczba dni w miesiacu (nieprzestepnym): 30" << std::endl;
                cout << "W tym miesiacu jest slonecznie." << std::endl;
                break;
            case 10:
                cout << "Miesiac: Pazdziernik" << std::endl;
                cout << "Liczba dni w miesiacu (nieprzestepnym): 31" << std::endl;
                cout << "W tym miesiacu jest pochmurno." << std::endl;
                break;
            case 11:
                cout << "Miesiac: Listopad" << std::endl;
                cout << "Liczba dni w miesiacu (nieprzestepnym): 30" << std::endl;
                cout << "W tym miesiacu jest pochmurno." << std::endl;
                break;
            case 12:
                cout << "Miesiac: Grudzien" << std::endl;
                cout << "Liczba dni w miesiacu (nieprzestepnym): 31" << std::endl;
                cout << "W tym miesiacu jest pochmurno." << std::endl;
                break;
            default:
                cout << "Podano niepoprawny numer miesiąca. Program zostanie zakończony." << std::endl;
                return 1;
            }

		}

}
