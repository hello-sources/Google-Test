/*************************************************************************
	> File Name: haizei_test.h
	> Author: 
	> Mail: 
	> Created Time: 2020年01月12日 星期日 18时25分51秒
 ************************************************************************/

#ifndef _HAIZEI_TEST_H
#define _HAIZEI_TEST_H
#define max_n 1000

typedef void (*Func_T)();
extern Func_T func_arr[max_n];
extern int func_cnt;

#define TEST(a, b) \
    void  a##b();\
    __attribute__((constructor)) \
    void add_##a##b() {\
        func_arr[func_cnt++] = a##b;\
    }\
    void a##b()

#define EXPECT_EQ(a, b) {\
    if (a == b) {\
        printf("YES\n");\
    } else {\
        printf("NO\n");\
    }\
}

int RUN_ALL_TESTS();

#endif
