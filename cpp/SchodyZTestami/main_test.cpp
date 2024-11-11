// main_test.cpp
#include <gtest/gtest.h>
#include "funkcje.cpp"
#include "SchodyClass.cpp"

TEST(mojagrupatestow, test1) {
    double wysokoscKlatki = 320;
    double szerokoscKlatki = 590;
    Schody wynik = ObliczSchody(wysokoscKlatki, szerokoscKlatki);
    EXPECT_EQ(wynik.liczbaSchodow, 17);
}

TEST(mojagrupatestow, test2) {
    double wysokoscKlatki = 700;
    double szerokoscKlatki = 1300;
    Schody wynik = ObliczSchody(wysokoscKlatki, szerokoscKlatki);
    EXPECT_EQ(wynik.liczbaSchodow, 37);
}

TEST(mojagrupatestow, test3) {
    double wysokoscKlatki = 213;
    double szerokoscKlatki = 511;
    Schody wynik = ObliczSchody(wysokoscKlatki, szerokoscKlatki);
    EXPECT_EQ(wynik.liczbaSchodow, 12);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

