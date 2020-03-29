/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年01月12日 星期日 15时22分55秒
 ************************************************************************/

#include <iostream>
#include <cstdlib>
#include <cstdio>
#include "haizei_test.h"
#include "unit.h"
using namespace std;
//构造器先于主函数执行
__attribute__((constructor))
int haizei_init() {
    printf("hello haizei\n");
    return 0;
}

//一个TEST就是一次测试用例
TEST(test, add_function) {
    EXPECT_EQ(add(3, 4), 7);
    EXPECT_EQ(add(0, 0), 0);
    EXPECT_EQ(add(-1, -7), -8);
}
//还可以拷贝一份，test改为test1
TEST(test1, add_function) {
    EXPECT_EQ(add(3, 4), 7);
    EXPECT_EQ(add(0, 1), 1);
    EXPECT_EQ(add(-2, -3), -5);
}

TEST(test2, add_function) {
    EXPECT_EQ(add(3, 4), 7);
    EXPECT_EQ(add(0, 0), 0);
    EXPECT_EQ(add(-1, -7), -8);
}
int main(int argc, char *argv[]) {
    //::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
