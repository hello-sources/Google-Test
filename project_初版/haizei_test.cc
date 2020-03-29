#include "haizei_test.h"
#include <stdio.h>
Func_T func_arr[max_n];
int func_cnt = 0;



int RUN_ALL_TESTS() {
    for (int i = 0; i < func_cnt; i++) {
        printf("run :%d\n", i);
        func_arr[i]();
    }
    return 0;
}
