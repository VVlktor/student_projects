# Test if i switch
## Testowanie switcha i if wyglądało następująco:

Losowana była jedna liczba, ktora nastepnie przekazywana była do obu funkcji sprawdzających.

```cpp
TEST(BenchmarkTest, SwitchBenchmark) {
    // Początek pomiaru czasu
    auto start = std::chrono::high_resolution_clock::now();
    int l=vecc;
    TestujSwitch(l); // Sortujemy wektor

    // Koniec pomiaru czasu
    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> elapsed_seconds = end - start;

    std::cout << "Czas: " << elapsed_seconds.count() << "s\n";
}
//Test if
TEST(BenchmarkTest, IfBenchmark) {
    // Początek pomiaru czasu
    auto start = std::chrono::high_resolution_clock::now();
    int k = vecc;
    TestujIf(k);

    // Koniec pomiaru czasu
    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> elapsed_seconds = end - start;

    std::cout << "Czas: " << elapsed_seconds.count() << "s\n";
}
```

A oto funkcja losująca:
```cpp
std::srand(std::time(0));
    vecc=std::rand()%7+1;
```

Wyniki wykazują, że owe sposoby nie są równie wydajne. Jedna z nich wysuwa się na prowadzenie.
Switch jest szybszy od if, wyprzedzając go w wynikach.
Wyniki prezentują się następująco:

![22](https://github.com/user-attachments/assets/deb54d2e-66b3-4b3e-8d49-afbd31d0db8c)

Wylosowane liczby były za małe by dac sensowny wynik. NA RAZ NASTEPNY: ZMIENIC NA WIEKSZE LICZBY
