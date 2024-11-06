// main_test.cpp
#include <gtest/gtest.h>
#include "funkcje.cpp"


TEST(mojagrupatestow, test1) {
    double wysokoscKlatki = 90;
	double szerokoscKlatki = 180;
    string wynik = WyliczSchody(wysokoscKlatki, szerokoscKlatki);
    EXPECT_EQ(wynik, "");
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

