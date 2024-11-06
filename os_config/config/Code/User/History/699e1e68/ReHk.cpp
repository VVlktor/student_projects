// main_test.cpp
#include <gtest/gtest.h>
#include "functions.cpp"


TEST(mojagrupatestow, test1) {
    double wysokoscKlatki = 320;
	double szerokoscKlatki=590;
     wynik = WyliczSchody();
    EXPECT_EQ(wynik, "");
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

