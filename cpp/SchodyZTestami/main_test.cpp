// main_test.cpp
#include <gtest/gtest.h>
#include "funkcje.cpp"
#include "SchodyClass.cpp"

TEST(testyLiczby, test1) {
    double wysokoscKlatki = 320;
    double szerokoscKlatki = 590;
    Schody wynik = ObliczSchody(wysokoscKlatki, szerokoscKlatki);
    EXPECT_EQ(wynik.liczbaSchodow, 17);
}

TEST(testyLiczby, test2) {
    double wysokoscKlatki = 700;
    double szerokoscKlatki = 1300;
    Schody wynik = ObliczSchody(wysokoscKlatki, szerokoscKlatki);
    EXPECT_EQ(wynik.liczbaSchodow, 37);
}

TEST(testyLiczby, test3) {
    double wysokoscKlatki = 213;
    double szerokoscKlatki = 511;
    Schody wynik = ObliczSchody(wysokoscKlatki, szerokoscKlatki);
    EXPECT_EQ(wynik.liczbaSchodow, 12);
}

TEST(testyWysokosci, test4){
    double wysokoscKlatki = 380;
    double szerokoscKlatki = 590;
    Schody wynik = ObliczSchody(wysokoscKlatki, szerokoscKlatki);
    EXPECT_EQ(wynik.wysokoscSchoda, 19);
}

TEST(testyWysokosci, test5){
    double wysokoscKlatki = 750;
    double szerokoscKlatki = 1300;
    Schody wynik = ObliczSchody(wysokoscKlatki, szerokoscKlatki);
    EXPECT_EQ(wynik.wysokoscSchoda, 18.75);
}

TEST(testyWysokosci, test6){
    double wysokoscKlatki = 210;
    double szerokoscKlatki = 400;
    Schody wynik = ObliczSchody(wysokoscKlatki, szerokoscKlatki);
    EXPECT_EQ(wynik.wysokoscSchoda, 17.5);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

