//
// Created by panky on 2021/3/9.
//
#include <stdio.h>

// 函数的定义
void myFunc() {
    printf("my func\n");
    return;
}

int my_add(int a, int b) {
    return a + b;
}

void test01() {
    // 函数的调用：函数名 + ()
    myFunc();

    int data1, data2;
    data1 = 10;
    data2 = 20;
    printf("result %d\n", my_add(data1, data2));

    printf("%p", my_add);
}

void test02() {
    printf("func address: %p\n", my_add);  // my_add 代表函数的入口地址
    int dt1 = 15, dt2 = 75;
    int ret = ((int(*)(int, int))(0x004014E3))(dt1, dt2);  // 如果my_add地址不变，可通过地址直接调用函数
    printf("ret = %d\n", ret);
}
