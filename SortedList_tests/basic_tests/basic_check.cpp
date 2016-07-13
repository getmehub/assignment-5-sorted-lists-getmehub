//
// Created by Marc Sosnick-Pérez on 7/5/16.
// gtest sanity check
// from Omar Shaikh's Spring 2016 CSC 340 work

#include "gtest/gtest.h"

TEST(basic_check, test_eq){
    EXPECT_EQ(1,1);
}

TEST(basic_check, test_neq){
    EXPECT_NE(1,0);
}

TEST(basic_check, test_true){
    EXPECT_TRUE(1);
}

TEST(basic_check, test_false){
    EXPECT_FALSE(0);
}

TEST(basic_check, test_lt){
    EXPECT_LT(0,1);
}

TEST(basic_check, test_gt){
    EXPECT_GT(1,0);
}

TEST(basic_check, test_le){
    EXPECT_LE(0,1);
    EXPECT_LE(0,0);
}

TEST(basic_check, test_ge){
    EXPECT_GE(1,0);
    EXPECT_GE(0,0);
}

TEST(basic_check, test_streq){
    EXPECT_STREQ("equal","equal");
}

TEST(basic_check, test_strne){
    EXPECT_STRNE("not equal","equal");
}

TEST(basic_check, test_strcaseeq){
    EXPECT_STRCASEEQ("equal", "EQUAL");
}

TEST(basic_check, test_strcasene){
    EXPECT_STRCASENE("NOT EQUAL","equal");
}





