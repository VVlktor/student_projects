#include <iostream>

using namespace std;


class Schody {
public:
    double wysokoscSchoda;
    double szerokoscSchoda;
    int liczbaSchodow;
    bool czyWyliczone;

    Schody() {
        czyWyliczone = false;
    }

    void Wypisz() {
        if (czyWyliczone) {
            cout << "Liczba stopni: " << liczbaSchodow << endl;
            cout << "Wysokosc stopnia: " << wysokoscSchoda  << endl;
            cout << "Szerokosc stopnia: " << szerokoscSchoda << endl << endl;
        }
        else {
            cout << "Nie udalo sie wyliczyc schodow" << endl;
        }
    }
};
