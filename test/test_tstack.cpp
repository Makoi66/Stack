#include "gtest.h"
#include "tstack.h"

TEST(StackTest, PushOneElement) {
    Stack<int> s;
    s.push(10);
    ASSERT_EQ(s.size(), 1);
    ASSERT_EQ(s.top(), 10);
}

TEST(StackTest, PushMultipleElements) {
    Stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    ASSERT_EQ(s.size(), 3);
    ASSERT_EQ(s.top(), 30);
}


TEST(StackTest, PopOneElement) {
    Stack<int> s;
    s.push(10);
    s.pop();
    ASSERT_TRUE(s.empty());
}


TEST(StackTest, PopMultipleElements) {
    Stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.pop();
    ASSERT_EQ(s.size(), 2);
    ASSERT_EQ(s.top(), 20);
    s.pop();
    ASSERT_EQ(s.size(), 1);
    ASSERT_EQ(s.top(), 10);
}


TEST(StackTest, TopOfStack) {
    Stack<int> s;
    s.push(10);
    ASSERT_EQ(s.top(), 10);
}

TEST(StackTest, IsEmptyInitially) {
    Stack<int> s;
    ASSERT_TRUE(s.empty());
}

TEST(StackTest, IsNotEmptyAfterPush) {
    Stack<int> s;
    s.push(10);
    ASSERT_FALSE(s.empty());
}

TEST(StackTest, IsEmptyAfterPushAndPop) {
    Stack<int> s;
    s.push(10);
    s.pop();
    ASSERT_TRUE(s.empty());
}

TEST(StackTest, SizeInitially) {
    Stack<int> s;
    ASSERT_EQ(s.size(), 0);
}

TEST(StackTest, SizeAfterPush) {
    Stack<int> s;
    s.push(10);
    ASSERT_EQ(s.size(), 1);
}


TEST(StackTest, SizeAfterMultiplePush) {
    Stack<int> s;
    s.push(10);
    s.push(20);
    ASSERT_EQ(s.size(), 2);
}

TEST(StackTest, SizeAfterPushAndPop) {
    Stack<int> s;
    s.push(10);
    s.pop();
    ASSERT_EQ(s.size(), 0);
}


TEST(StackTest, ClearEmptyStack) {
    Stack<int> s;
    s.clear();
    ASSERT_TRUE(s.empty());
    ASSERT_EQ(s.size(), 0);
}

TEST(StackTest, ClearNonEmptyStack) {
    Stack<int> s;
    s.push(10);
    s.push(20);
    s.clear();
    ASSERT_TRUE(s.empty());
    ASSERT_EQ(s.size(), 0);
}