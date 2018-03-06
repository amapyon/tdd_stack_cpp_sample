#include <gtest/gtest.h>
#include "Stack.h"

TEST(StackTest, testIsEmpty) {
	Stack stack;
	ASSERT_TRUE(stack.isEmpty());
}

TEST(StackTest, testSize) {
	Stack stack;
	ASSERT_EQ(0, stack.size());
}

TEST(StackTest, testPush) {
	Stack stack;
	stack.push(10);
	ASSERT_EQ(1, stack.size());
}

TEST(StackTest, testTop) {
	Stack stack;
	stack.push(10);
	ASSERT_EQ(10, stack.top());
}

TEST(StackTest, testPop) {
	Stack stack;
	stack.push(10);
	stack.pop();
	ASSERT_TRUE(stack.isEmpty());
}

TEST(StackTest, testPushPush) {
	Stack stack;
	stack.push(10);
	stack.push(20);
	ASSERT_EQ(20, stack.top());
}

TEST(StackTest, testTopWhenEmpty) {
	Stack stack;
	ASSERT_THROW({
		stack.top();
	}, EmptyException);
}

TEST(StackTest, testPopWhenEmpty) {
	Stack stack;
	ASSERT_THROW({
		stack.pop();
	}, EmptyException);
}
