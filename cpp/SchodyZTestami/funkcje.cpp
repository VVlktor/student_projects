#include <iostream>
#include "SchodyClass.cpp"

using namespace std;

void Wypisz(Stairs stairs) {
    if (stairs.czyWyliczone) {
        cout << "Liczba stopni: " << stairs.liczbaSchodow << endl;
        cout << "Wysokosc stopnia: " << stairs.wysokoscSchoda << endl;
        cout << "Szerokosc stopnia: " << stairs.szerokoscSchoda << endl << endl;
    }
    else {
        cout << "Nie udalo sie wyliczyc schodow" << endl;
    }
}
