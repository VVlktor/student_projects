# Testowanie funkcji FizzBuzz

## 1. Funkcje FizzBuzz
W języku C++ napisano funkcje FizzBuzz
```cpp
string FizzBuzz(int a){
    if(a%3==0 && a%5==0){
	return "FizzBuzz";
    }else if(a%3==0){
	return "Fizz";
    }else if(a%5==0){
	return "Buzz";
    }
    return "";
}

```

Funkcja ma na celu zwrócenie Fizz jesli podana liczba jest podzielna przez 3, Buzz jesli jest podzielna przez 5, a FizzBuzz jesli podzielna jest orzez obie te liczby.
Gdy funkcja nie spełnia żadnego z powyrzszych warunków, zwracany jest pusty string.

## 2. Testy

```cpp
TEST(mojagrupatestow, testFizz) {
    int liczba = 6;
    string wynikFizz = FizzBuzz(liczba);
    EXPECT_EQ(wynikFizz, "Fizz");
}

TEST(mojagrupatestow, testBuzz) {
    int liczba=20;
    string wynikBuzz = FizzBuzz(liczba);
    EXPECT_EQ(wynikBuzz, "Buzz");
}

TEST(mojagrupatestow, testFizzBuzz) {
    int liczba = 30;
    string wynikFizzBuzz = FizzBuzz(liczba);
    EXPECT_EQ(wynikFizzBuzz, "FizzBuzz");
}
```

## 3. Wyniki testów
| Liczba | Wynik oczekiwany | Wynik podany przez program |
| ---- | ---- | ---- |
| 6 | Fizz | Fizz |
| 10 | Buzz | Buzz |
| 190 | Buzz | Buzz|
| 34 | (pusty string) | (pusty string) |
| 60 | FizzBuzz | FizzBuzz |

Testy przeprowadzone na wszelkich liczbach całkowitych wskazywały poprawność działania programu.
Testy okazały się w pełni sprawne a wyniki poprawne. <br>

## 4. Wniosek
### Testy ukazują poprawność działania programu. Fizz, Buzz oraz FizzBuzz zwracane są odpowiednio do wprowadzanych danych.
