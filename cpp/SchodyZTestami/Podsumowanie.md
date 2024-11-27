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

## 2. Klasa Stairs:
Stworzono klasę Stairs w której zawarto obliczanie wymiarow i ilosci schodow:
```cpp
class Stairs {
public:
    double wysokoscSchoda;
    double szerokoscSchoda;
    int liczbaSchodow;
    bool czyWyliczone;

    Stairs() {
        czyWyliczone = false;
    }

    Stairs ObliczSchody(double H_klatki, double L_klatki) {
        Stairs schody = Stairs();
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
};
```
Funkcja ObliczSchody oblicza najmniejszą możliwą liczbę stopni, po czym iteruje aż do maksymalnej liczby stopni. W każdej iteracji sprawdza, czy dana liczba stopni zmieści się w wymaganych wymiarach, po czym szuka odpowiedniej szerokości stopnia. Iteruje przez wszystkie przypdaki nawet po znalezieniu możliwego rozwiązania, co gwarantuje najbardziej optymalny stosunek wysokości do szerokości, oraz większe przywiązanie do wymogu wysokości.<br>




## 3. Działanie programu:
### 3.1. Program tworzy klasę Stairs po czym wyołuje ObliczSchody by obliczyć dane schodów.
```cpp
int main() {
    double H_klatki, L_klatki;
    cout << "Podaj wysokosc klatki: ";
    cin >> H_klatki;
    cout << "Podaj szerokosc klatki: ";
    cin >> L_klatki;
    Stairs schodki = Stairs();
    schodki = schodki.ObliczSchody(H_klatki, L_klatki);
    Wypisz(schodki);
}
```
### 3.2. Program posiada funkcję Wypisz, która pozwala na wypisanie danych schodów.
```cpp
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
```

## 4. Testy:
Przeprowadzono testy funkcji ObliczSchody.

### 4.1 Testy ilości schodów:
| Wprowadzona wysokość klatki | Wprowadzona szerokość klatki | Oczekiwana liczba stopni | Zwrócona liczba stopni | Oczekiwana wysokość | Zwrócona wysokość | Oczekiwana szerokość | Zwrócona szerokość |
| ---- | ---- | ---- | ---- | ---- | ---- | ---- | ---- |
| 320 | 580 | 20 | 20 | 16 | 16 | 29 | 29 |
| 700 | 1300 | 44 | 44 | 15.91 | 15.91 | 29.50 | 29.50 | 
| 210 | 407 | 14 | 14 | 15 | 15 | 29 | 29 |

```cpp
TEST(testyLiczb, test1) {
    double wysokoscKlatki = 320;
    double szerokoscKlatki = 580;
    Stairs wynik = Stairs();
    wynik = ObliczSchody(wysokoscKlatki, szerokoscKlatki);
    EXPECT_EQ(wynik.liczbaSchodow, 20);
    EXPECT_EQ(wynik.wysokoscSchoda, 16);
    EXPECT_EQ(wynik.szerokoscSchoda, 29);
}
```


### 4.2 Testy możliwości wykonania schodów:
| Wprowadzona wysokość klatki | Wprowadzona szerokość klatki | Oczekiwany rezultat | Zwrócony rezultat |
| ---- | ---- | ---- | ---- |
| 180 | 200 | false | false |
| 750 | 1300 | true | true |
| 210 | 400 | true | true |

```cpp
TEST(testyWysokosci, test4){
    double wysokoscKlatki = 180;
    double szerokoscKlatki = 200;
    Schody wynik = Schody();
    wynik = ObliczSchody(wysokoscKlatki, szerokoscKlatki);
    EXPECT_EQ(wynik.czyWyliczone, false);
}
```
## 5. Aplikacja desktopowa:
Aplikacja desktopowa wykonana została w technologi .NET MAUI w języku C#.

### 5.1 Klasa Schody w aplikacji MAUI:
```cs
public class Stairs
{
    public Stairs(double H_klatki, double L_klatki)
    {
        for (int liczbaStopni = (int)Math.Ceiling(H_klatki / max_H_Stopnia); liczbaStopni <= Math.Floor(H_klatki / min_H_Stopnia); liczbaStopni++)
        {
            double wysokoscStopnia = H_klatki / liczbaStopni;
            if (!(wysokoscStopnia < min_H_Stopnia || wysokoscStopnia > max_H_Stopnia))
            {
                for (double szerokoscStopnia = min_L_Stopnia; szerokoscStopnia <= max_L_Stopnia; szerokoscStopnia += 0.1)
                {
                    if (szerokoscStopnia * liczbaStopni <= L_klatki)
                    {
                        stanSchodow = new ObliczoneSchody(wysokoscStopnia, szerokoscStopnia, liczbaStopni);
                    }
                }
            }
        }
    }

    public const double min_H_Stopnia = 15.0;
    public const double max_H_Stopnia = 19.0;
    public const double min_L_Stopnia = 29.0;
    public const double max_L_Stopnia = 32.0;

    public StanSchodow stanSchodow { get; set; } = new BrakSchodow();

    public string Wypisz()
    {
        if (stanSchodow is ObliczoneSchody)
        {
            var x = (ObliczoneSchody)stanSchodow;
            return $"Liczba stopni: {x.liczbaSchodow}\nWysokosc stopnia: {x.wysokoscSchoda.ToString("F")}\nSzerokosc stopnia: {x.szerokoscSchoda.ToString("F")}";
        }
        else
            return "Nie udalo sie wyliczyc schodow";
    }
}
```
Konstruktor przyjmuje parametry z których obliczane są wymiary schodów. Dane schodów przechowywane są w rekordzie StanSchodów, który może posiadać dane schodów jako ObliczoneSchody lub nie posiadać danych schodów w przypadku braku możliwości obliczenia ich jako BrakSchdów. Jest to możliwe dzięki abstrakcyjnemu rekordowi StanSchodów:

```cs
public abstract record StanSchodow();
public record BrakSchodow() : StanSchodow;
public record ObliczoneSchody(double wysokoscSchoda, double szerokoscSchoda, int liczbaSchodow) : StanSchodow;
```

### 5.2 Wyświetlanie interfejsu użytkownika:
Aplikacja posiada interfejs użytkownika pozwalający na przymowanie danych od użytkownika oraz wypisanie wymiarów obliczonych schodów.
![image](https://github.com/user-attachments/assets/439475e9-3bdc-4367-b99f-45b6a5279aff)

### 5.3 Obsługa danych podanych przez użytkownika:
Aplikacja przyjmuje dane od użytkownika z pól po czym używa klasy Stairs do obliczeń. Następnie schody są rysowane na ekranie.
```cs
private async void ObliczSchodki(object sender, EventArgs e)
{
     int szerokosc, wysokosc;
     if (!int.TryParse(SzerScho.Text, out szerokosc) || !int.TryParse(WysScho.Text, out wysokosc))
         return;
     Stairs stairs = new Stairs(wysokosc, szerokosc);
     WynikSchodow.Text = stairs.Wypisz();
     plotno.Drawable = new MyDrawable(((ObliczoneSchody)stairs.stanSchodow).wysokoscSchoda, ((ObliczoneSchody)stairs.stanSchodow).szerokoscSchoda, ((ObliczoneSchody)stairs.stanSchodow).liczbaSchodow, szerokosc);
}
```

## 6. Podsumowanie:
Program spełnia swoje założenia. Schody są liczone gdy wysokość i szerokość klatki pozawalają na wyliczenie rozmiarów schodów zgodnie z założonymi minimalnymi i maksyamlnymi wymiarami.
