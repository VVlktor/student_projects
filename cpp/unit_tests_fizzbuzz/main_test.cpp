// main_test.cpp
#include <gtest/gtest.h>
#include "functions.cpp"


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


// ... inne testy ...

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

