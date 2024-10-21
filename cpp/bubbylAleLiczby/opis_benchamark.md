# Benchmark: quicksort i bubblesort
## 1. Cel ćwiczenia
W C++ Sprawdzono dwie funkcje sortowania: bubblesort i quicksort. Oto oba sposoby sortowania:
### Bubblesort:
```cpp
void Sortuj(vector<int>& liczby){
    for(int i=0; i<liczby.size(); i++)
    {
	for(int j=i; j<liczby.size(); j++){
	    if(liczby[i]>liczby[j])
	    {
		int a=liczby[i];
		liczby[i]=liczby[j];
		liczby[j]=a;
	    }
	}
    }
}
```
### Quicksort:
```cpp
void quickSort(std::vector<int>& vec) {
    if (vec.size() <= 1) return;
    int pivot = vec[vec.size() / 2];
    std::vector<int> left, right;
    for (size_t i = 0; i < vec.size(); i++) {
        if (vec[i] < pivot) left.push_back(vec[i]);
        else if (vec[i] > pivot) right.push_back(vec[i]);
    }
    quickSort(left);
    quickSort(right);
    vec.clear();
    vec.insert(vec.end(), left.begin(), left.end());
    vec.push_back(pivot);
    vec.insert(vec.end(), right.begin(), right.end());
}
```


## 2. Przeprowadzenie benchmarków
Do funkcji sortujących przekazany został wektor posiadający te same dane.
Wyniki pokazują, że sortwanie bąbelkowe jest dużo wolniejsze od quicksorta (tak, wiem, to oczywiste)
Wyniki prezetnują się nasępująco:
 - Quicksort: 0.0112293s
 - Bubblesort: 0.574784s <br>
 
<b>Testy zostały powtórzone kilkukrotnie.</b> Wyniki były bardzo zbliżone.

Oryginalne wyniki:

![3](https://github.com/user-attachments/assets/172fdb8a-1a0a-4bc2-b447-3aac41f1bb9b)
Zdj. 1: Zrzut przedstawiający wyniki testów

## 3. Testy
Oto testy które zostały przeprowadzone:
```cpp
TEST(BenchmarkTest, QuickSortBenchmark) {
    // Początek pomiaru czasu
    auto start = std::chrono::high_resolution_clock::now();
    vector<int> l=vecc;
    quickSort(l); // Sortujemy wektor

    // Koniec pomiaru czasu
    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> elapsed_seconds = end - start;

    std::cout << "Czas sortowania: " << elapsed_seconds.count() << "s\n";
}
//Test wydajnosci sortowania BubbleSort
TEST(BenchmarkTest, SortwanieBabelkowe) {
    // Początek pomiaru czasu
    auto start = std::chrono::high_resolution_clock::now();
    vector<int> k = vecc;
    Sortuj(k); // Sortujemy wektor

    // Koniec pomiaru czasu
    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> elapsed_seconds = end - start;

    std::cout << "Czas sortowania: " << elapsed_seconds.count() << "s\n";
}
```

## 4. Wniosek
Sortowanie quicksort jest dużo szybsze niż bubblesort. 
Po przeprowadzeniu wielokrotnych testów, wykazane zostało, iż quicksort jest szybszy od bubblesorta ok. 5-7 razy
