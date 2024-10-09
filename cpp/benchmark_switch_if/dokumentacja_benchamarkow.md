# Test if i switch
## Testowanie szybkości działania `switcha` i `if` w języku C++ wyglądało następująco:

Losowana była jedna liczba, ktora nastepnie przekazywana była do obu funkcji, przez co oba testy przeprowadzane były na tych samych danych.

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

A oto funkcja losująca dane na których przeprowadzane były test funkcji:

```cpp
std::srand(std::time(0));
    vecc=std::rand()%7+1;
```
### Funkcja sprawdzająca działanie `if`:
```cpp
void TestujIf(int& liczba)
{
    if(liczba==1){
	cout << "Znaleziono" << endl;	
    }else if(liczba==2){
	 cout << "Znaleziono" << endl;
    }else if(liczba==3){
	 cout << "Znaleziono" << endl;
    }else if(liczba==4){
	 cout << "Znaleziono" << endl;
    }else if(liczba==5){
	 cout << "Znaleziono" << endl;
    }else if(liczba==6){
	 cout << "Znaleziono" << endl;
    }else{
	 cout << "Znaleziono" << endl;
    }
}
```
### Funkcja sprawdzająca działanie `switch`:
```cpp
void TestujSwitch(int& liczba)
{
    switch(liczba){
	case 1:
	    cout << "Znaleziono" << endl;
	    break;
	case 2:
	    cout << "Znaleziono" << endl;
	    break;
	case 3:
	    cout << "Znaleziono" << endl;
	    break;
	case 4:
	    cout << "Znaleziono" << endl;
	    break;
	case 5:
	    cout << "Znaleziono" << endl;
	    break;
	case 6:
	    cout << "Znaleziono" << endl;
	    break;
	default:
	    cout << "Znaleziono" << endl;
	    break;
    }
}
```

Wyniki wykazują, że owe sposoby nie są równie wydajne. Jedna z nich wysuwa się na prowadzenie.
Switch jest szybszy od if, wyprzedzając go w wynikach.
Wyniki prezentują się następująco:

![22](https://github.com/user-attachments/assets/deb54d2e-66b3-4b3e-8d49-afbd31d0db8c)

## Wniosek:
### Wylosowane liczby wskazywały, iż `switch` jest szybszy od `if`
