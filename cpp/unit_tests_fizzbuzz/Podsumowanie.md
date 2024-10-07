# Testowanie funkcji FizzBuzz

## Napisano funkcje FizzBuzz

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
## Testy do owej funkcji:

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

TEST(mojagrupatestow, mojtest2) {
    int liczba = 30;
    string wynikFizzBuzz = FizzBuzz(liczba);
    EXPECT_EQ(wynikFizzBuzz, "FizzBuzz");
}

```

Testy okazały się sprawne. <br>
Wniosek: testy ukazują poprawność działania programu. Happy ending!
