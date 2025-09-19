#include "gtest/gtest.h"
#include <string>
#include "../fun.h"

std::string fun(const std::string& comment);

TEST(TrollCommentTest, BasicExampleFromTask) {
    EXPECT_EQ(fun("This website is for losers LOL!"), "Ths wbst s fr lsrs LL!");
}

TEST(TrollCommentTest, EmptyString) {
    EXPECT_EQ(fun(""), "");
}

TEST(TrollCommentTest, OnlyLatinVowels) {
    EXPECT_EQ(fun("aeiouyAEIOUY"), "");
}

TEST(TrollCommentTest, MixedCaseVowels) {
    EXPECT_EQ(fun("AeIoUy"), "");
}

TEST(TrollCommentTest, NonLatinTextUntouched) {
    EXPECT_EQ(fun("Привет 你好"), "Привет 你好");
}

TEST(TrollCommentTest, NumbersAndSymbols) {
    EXPECT_EQ(fun("a1e2i3o4u5y6!@#$"), "123456!@#$");
}

TEST(TrollCommentTest, OnlyConsonants) {
    EXPECT_EQ(fun("bcdfghjklmnpqrstvwxz"), "bcdfghjklmnpqrstvwxz");
}

TEST(TrollCommentTest, SpacesAndPunctuation) {
    EXPECT_EQ(fun("Hello, World! How are you?"), "Hll, Wrld! Hw r ?");
}

TEST(TrollCommentTest, StringWithNoLetters) {
    EXPECT_EQ(fun("123!@# 456$%^"), "123!@# 456$%^");
}

TEST(TrollCommentTest, AllVowelsWithSpaces) {
    EXPECT_EQ(fun("a e i o u y A E I O U Y"), "           ");
}

TEST(TrollCommentTest, OnlySpaces) {
    EXPECT_EQ(fun("   "), "   ");
}

TEST(TrollCommentTest, SingleVowel) {
    EXPECT_EQ(fun("a"), "");
}

TEST(TrollCommentTest, SingleConsonant) {
    EXPECT_EQ(fun("b"), "b");
}