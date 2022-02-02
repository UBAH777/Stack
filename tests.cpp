#include <gtest/gtest.h>
#include "stack.cpp"
using namespace BMSTU;

TEST(MyStackTests, Stack_Size_Capasity_Test) {
    stack<int> a;
    ASSERT_EQ(a.size(), 0);
    ASSERT_EQ(a.capacity(), 0);

    a.push(4);
    ASSERT_EQ(a.size(), 1);
    ASSERT_EQ(a.capacity(), 1);

    a.push(8);
    ASSERT_EQ(a.size(), 2);
    ASSERT_EQ(a.capacity(), 2);

    a.push(16);
    ASSERT_EQ(a.size(), 3);
    ASSERT_EQ(a.capacity(), 4);

    a.push(32);
    ASSERT_EQ(a.size(), 4);
    ASSERT_EQ(a.capacity(), 4);

    a.pop();
    ASSERT_EQ(a.size(), 3);
    ASSERT_EQ(a.capacity(), 4);
}


TEST(MyStackTests, Stack_Top_Test) {
    stack<int> a;

    a.push(1);
    ASSERT_EQ(a.top(), 1);

    a.push(123);
    ASSERT_EQ(a.top(), 123);
}