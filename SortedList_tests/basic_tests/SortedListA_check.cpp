//
// Created by Marc Sosnick on 7/5/16.
//

#include "gtest/gtest.h"
#include "SortedListA.h"
#include <iostream>
#include <string>

TEST(SortedListA_Test, insert_front){
    SortedListA a;
    a.insert(3);
    a.insert(1);
}

TEST(SortedListA_Test, insert_end){
    SortedListA a;
    a.insert(1);
    a.insert(3);
}

TEST(SortedListA_Test, insert_inside){
    SortedListA a;
    a.insert(1);
    a.insert(3);
    a.insert(2);
}

TEST(SortedListA_Test, insert_multiple){
    SortedListA a;
    a.insert(1);
    a.insert(3);
    a.insert(2);
    a.insert(2);
}

TEST(SortedListA_Test, size){
    SortedListA a;
    a.insert(3);
    a.insert(1);
    a.insert(2);
    a.insert(1);

    EXPECT_EQ(a.size,4);
}

TEST(SortedListA_Test, subscript){
    SortedListA a;
    a.insert(3);
    a.insert(1);
    a.insert(2);
    a.insert(1);

    EXPECT_EQ(a[0],1);
    EXPECT_EQ(a[1],1);
    EXPECT_EQ(a[2],2);
    EXPECT_EQ(a[3],3);
}

TEST(SortedListA_Test, death){
    SortedListA a;
    a.insert(3);
    a.insert(1);

    EXPECT_DEATH({ a[2]; }, "");
}


