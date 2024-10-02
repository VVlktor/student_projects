#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>
#include "gtest/gtest.h"
#include <chrono>
#include "testy.cpp"


int vecc = 0;

//Test switcha
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

int main(int argc, char **argv) {
    std::srand(std::time(0));
    vecc=std::rand()%7+1;
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

