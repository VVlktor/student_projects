#include <iostream>
#include "funkcje.cpp"
#include "SchodyClass.cpp"

using namespace std;

int main() {
    double H_klatki, L_klatki;
    cout << "Podaj wysokosc klatki: ";
    cin >> H_klatki;
    cout << "Podaj szerokosc klatki: ";
    cin >> L_klatki;
    Schody schodki = Schody();
    schodki = schodki.ObliczSchody(H_klatki, L_klatki);
    Wypisz(schodki);
}
