# Obliczanie ilości schodów

## 1. Cel zadania:

Program ma obliczyć ilość schodów oraz wysokość i szerokość pojedynczego stopnia. Wymiary klatki schodowej podawane są przez użytkownika.<br>
### Wymiary schodów określone były w pewnych granicach:

| Wymóg | Liczba podana w cm |
| ---- | ---- |
| Minimalna szerokość stopnia | 29 |
| Maksymalna szerokość stopnia | 32 |
| Minimalna wysokość stopnia | 15 |
| Maksymalna wysokość stopnia | 19 |

## 2. Klasa Schody:
Stworzono klasę Schody by móc zwórcić wynik jak klasę:
```cpp
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
```



## 3. Działanie funkcji ObliczSchody:
Funkcja ObliczSchody przymuje wysokość klatki oraz jej szerokość. Jako wynik zwraca klasę Schody.
```cpp
Schody ObliczSchody(double H_klatki, double L_klatki) {
    Schody schody = Schody();
    double min_H_Stopnia = 15.0;
    double max_H_Stopnia = 19.0;
    double min_L_Stopnia = 29.0;
    double max_L_Stopnia = 32.0;
    for (int liczbaStopni = ceil(H_klatki / max_H_Stopnia); liczbaStopni <= floor(H_klatki / min_H_Stopnia); liczbaStopni++) {
        double wysokoscStopnia = H_klatki / liczbaStopni;
        if (!(wysokoscStopnia < min_H_Stopnia || wysokoscStopnia > max_H_Stopnia)) {
            for (double szerokoscStopnia = min_L_Stopnia; szerokoscStopnia <= max_L_Stopnia; szerokoscStopnia += 0.1) {
                if (szerokoscStopnia * liczbaStopni <= L_klatki) {
                    schody.liczbaSchodow = liczbaStopni;
                    schody.wysokoscSchoda = wysokoscStopnia;
                    schody.szerokoscSchoda = szerokoscStopnia;
                    schody.czyWyliczone = true;
                }
            }
        }
    }
    return schody;
}
```
Funkcja oblicza najmniejszą możliwą liczbę stopni, po czym iteruje aż do maksymalnej liczby stopni. W każdej iteracji sprawdza, czy dana liczba stopni zmieści się w wymaganych wymiarach, po czym szuka odpowiedniej szerokości stopnia. Iteruje przez wszystkie przypdaki nawet po znalezieniu możliwego rozwiązania, co gwarantuje najbardziej optymalny stosunek wysokości do szerokości, oraz większe przywiązanie do wymogu wysokości.<br>

## 4. Testy:
Przeprowadzono testy funkcji ObliczSchody.

### 4.1 Testy ilości schodów:
| Wprowadzona wysokość klatki | Wprowadzona szerokość klatki | Oczekiwana liczba stopni | Zwrócona liczba stopni |
| ---- | ---- | ---- | ---- |
| 320 | 590 | 17 | 17 |
| 700 | 1300 | 37 | 37 |
| 213 | 511 | 12 | 12 |
| 1000 | 200 | Brak wyniku, dane niepoprawne | Brak wyniku, dane niepoprawne |

```cpp
TEST(mojagrupatestow, test1) {
    double wysokoscKlatki = 320;
    double szerokoscKlatki = 590;
    Schody wynik = ObliczSchody(wysokoscKlatki, szerokoscKlatki);
    EXPECT_EQ(wynik.liczbaSchodow, 17);
}
```


### 4.2 Testy wysokości schodów:
| Wprowadzona wysokość klatki | Wprowadzona szerokość klatki | Oczekiwana wysokość stopna | Zwrócona wysokość stopnia |
| ---- | ---- | ---- | ---- |
| 380 | 590 | 19 | 19 |
| 750 | 1300 | 18.75 | 18.75 |
| 210 | 400 | 17.5 | 17.5 |

```cpp
TEST(testyWysokosci, test4){
    double wysokoscKlatki = 380;
    double szerokoscKlatki = 590;
    Schody wynik = ObliczSchody(wysokoscKlatki, szerokoscKlatki);
    EXPECT_EQ(wynik.wysokoscSchoda, 19);
}
```
