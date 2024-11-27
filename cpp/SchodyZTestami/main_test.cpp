// main_test.cpp
#include <gtest/gtest.h>
#include "funkcje.cpp"
#include "SchodyClass.cpp"

TEST(testyLiczb, test1) {
    double wysokoscKlatki = 320;
    double szerokoscKlatki = 580;
    Staris wynik = Staris();
    wynik = wynik.ObliczSchody(wysokoscKlatki, szerokoscKlatki);
    EXPECT_EQ(wynik.liczbaSchodow, 20);
    EXPECT_EQ(wynik.wysokoscSchoda, 16);
    EXPECT_EQ(wynik.szerokoscSchoda, 29);
}

TEST(testyLiczb, test2) {
    double wysokoscKlatki = 700;
    double szerokoscKlatki = 1300;
    Staris wynik = Staris();
    wynik = wynik.ObliczSchody(wysokoscKlatki, szerokoscKlatki);
    EXPECT_EQ(wynik.liczbaSchodow, 44);
    EXPECT_EQ(wynik.wysokoscSchoda, 15.91);
    EXPECT_EQ(wynik.szerokoscSchoda, 29.50);
}

TEST(testyLiczb, test3) {
    double wysokoscKlatki = 210;
    double szerokoscKlatki = 407;
    Staris wynik = Staris();
    wynik = wynik.ObliczSchody(wysokoscKlatki, szerokoscKlatki);
    EXPECT_EQ(wynik.liczbaSchodow, 14);
    EXPECT_EQ(wynik.wysokoscSchoda, 15);
    EXPECT_EQ(wynik.szerokoscSchoda, 29);
}

TEST(testyWykonywalnosci, test4){
    double wysokoscKlatki = 180;
    double szerokoscKlatki = 200;
    Staris wynik = Staris();
    wynik = wynik.ObliczSchody(wysokoscKlatki, szerokoscKlatki);
    EXPECT_EQ(wynik.czyWyliczone, false);
}

TEST(testyWykonywalnosci, test5){
    double wysokoscKlatki = 750;
    double szerokoscKlatki = 1300;
    Staris wynik = Staris();
    wynik = wynik.ObliczSchody(wysokoscKlatki, szerokoscKlatki);
    EXPECT_EQ(wynik.czyWyliczone, true);
}

TEST(testyWykonywalnosci, test6){
    double wysokoscKlatki = 210;
    double szerokoscKlatki = 400;
    Staris wynik = Staris();
    wynik = wynik.ObliczSchody(wysokoscKlatki, szerokoscKlatki);
    EXPECT_EQ(wynik.czyWyliczone, true);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

