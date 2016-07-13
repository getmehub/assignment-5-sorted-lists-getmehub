//
// Created by Marc Sosnick on 7/5/16.
//

#include "gtest/gtest.h"
#include "SortedListP.h"
#include <iostream>
#include <string>


TEST(SortedListP_Test, insert_front){
    SortedListP a;
    a.insert(3);
    a.insert(1);
}

TEST(SortedListP_Test, insert_end){
    SortedListP a;
    a.insert(1);
    a.insert(3);
}

TEST(SortedListP_Test, insert_inside){
    SortedListP a;
    a.insert(1);
    a.insert(3);
    a.insert(2);
}

TEST(SortedListP_Test, insert_multiple){
    SortedListP a;
    a.insert(1);
    a.insert(3);
    a.insert(2);
    a.insert(2);
}

TEST(SortedListP_Test, size){
    SortedListP a;
    a.insert(3);
    a.insert(1);
    a.insert(2);
    a.insert(1);

    EXPECT_EQ(a.size,4);
}

TEST(SortedListP_Test, subscript){
    SortedListP a;
    a.insert(3);
    a.insert(1);
    a.insert(2);
    a.insert(1);

    EXPECT_EQ(a[0],1);
    EXPECT_EQ(a[1],1);
    EXPECT_EQ(a[2],2);
    EXPECT_EQ(a[3],3);
}

TEST(SortedListP_Test, death){
    SortedListP a;
    a.insert(3);
    a.insert(1);

    EXPECT_DEATH({ a[2]; }, "");
}


