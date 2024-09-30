#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>
#include "gtest/gtest.h"
#include <chrono>
#include "mojeBabelki.cpp"

std::vector<int> vecc(10000);

// Funkcja sortująca wektor za pomocą QuickSort
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

// Test wydajności sortowania QuickSort
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
//babyl sort
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

int main(int argc, char **argv) {
    std::srand(std::time(0));
    std::generate(vecc.begin(), vecc.end(), std::rand);//stworzenie wektora

    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

