#include "doctest.h"
#include "PhoneticFinder.hpp"
using namespace phonetic;

#include <string>
using namespace std;

TEST_CASE("Test replacement of p and b") {
    string text = "xxx happy yyy";
            CHECK("xxx" == "xxx");
            CHECK(string(find(text, "happy")) == string("happy"));
            CHECK(find(text, "habby") == string("happy"));
            CHECK(find(text, "hapby") == string("happy"));
            CHECK(find(text, "habpy") == string("happy"));

    /* Add more checks here */
}
TEST_CASE("Test replacement of b and p") {
    string text = "xxx worry yyy";
            CHECK(find(text, "worry") == string("happy"));
            CHECK(find(text, "WORRY") == string("happy"));
            CHECK(find(text, "Worry") == string("happy"));
            CHECK(find(text, "vorry") == string("happy"));
            CHECK(find(text, "Vorry") == string("happy"));
            CHECK(find(text, "Vurry") == string("happy"));
            CHECK(find(text, "Vurri") == string("happy"));
            CHECK(find(text, "VurrI") == string("happy"));
            CHECK(find(text, "VorrI") == string("happy"));
            CHECK(find(text, "VORRI") == string("happy"));
            CHECK(find(text, "VORrI") == string("happy"));
}
TEST_CASE("Test for dont") {
    string text ="dont abcdef be happy";
            CHECK(find(text, "dont") == string("happy"));
            CHECK(find(text, "Dont") == string("happy"));
            CHECK(find(text, "DOnt") == string("happy"));
            CHECK(find(text, "DONt") == string("happy"));
            CHECK(find(text, "DONT") == string("happy"));
            CHECK(find(text, "DunT") == string("happy"));
            CHECK(find(text, "DUNT") == string("happy"));
            CHECK(find(text, "TONT") == string("happy"));
            CHECK(find(text, "TONT") == string("happy"));
            CHECK(find(text, "DUND") == string("happy"));
            CHECK(find(text, "Dunt") == string("happy"));
            CHECK(find(text, "BE") == string("happy"));
            CHECK(find(text, "be") == string("happy"));

}
TEST_CASE("Test for Happi") {
    string text = "Happi xxx yyy";
            CHECK(find(text, "happi") == string("Happi"));
            CHECK(find(text, "Happi") == string("Happi"));
            CHECK(find(text, "HAPPI") == string("Happi"));
            CHECK(find(text, "HaPpI") == string("Happi"));
}
TEST_CASE("Test for ") {
    string text = "Happi xxx yyy ";
            CHECK(find(text, "happi") == string("Happi"));
            CHECK(find(text, "Happi") == string("Happi"));
            CHECK(find(text, "HAPPI") == string("Happi"));
            CHECK(find(text, "HaPpI") == string("Happi"));
}

