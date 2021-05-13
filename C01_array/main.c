#include <stdio.h>

void test01();

void test02();

void test03();


void test01() {
    // 局部数组 如果不初始化 内容不确定
    int arr[10];

    // 遍历数组
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void test02() {
    int arr[5] = {10, 20, 30};
    printf("size of arr is %d bytes\n", sizeof(arr));  // 20 bytes

    printf("size of element in arr is %d bytes\n", sizeof(arr[0]));  // 4 bytes

    int n = sizeof(arr) / sizeof(arr[0]);
    printf("numbers of arr is %d\n", n);  // 5
}

void test03() {
    int arr1[5] = {1, 2, 3};
    int arr2[] = {1, 2, 3};
    char arr3[5] = {1, 2, 3};
    int arr4[] = {[5] = 7};

    printf("%d\n", sizeof(arr1));
    printf("%d\n", sizeof(arr2));
    printf("%d\n", sizeof(arr3));
    printf("%d\n", sizeof(arr4));
}


void test04() {
    int arr[5] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    arr[0] = 100;

    arr[1]++;

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}

void test05() {
    int arr[5] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("input %d numbers\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}

void test06() {
    int arr[3][4];  // 局部数组不初始化，元素内容不确定

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 4; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

void test07() {
    int arr1[3][4] = {{1, 2}, {3}, {4, 5}};
    int arr2[3][4] = {1, 2, 3, 4, 5};

    printf("%d\n", arr1[1][0] + arr2[1][0]);
}

void test08() {
    int arr[3][4] = {0};

    printf("please input numbers: ");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    int sum = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            sum += arr[i][j];
        }
    }
    printf("sum is %d\n", sum);
}

void test09() {
    char str[6] = "hello";

    // 逐个字符遍历
    for (int i = 0; i < 6; i++){
        printf("%c", str[i]);
    }
    printf("\n-----------\n");

    // 字符数组利用 %s 整体遍历 推荐
    printf("%s\n", str);
}

void test10() {
    char str1[] = {'h', 'e', 'l', 'l', 'o'};  // 逐个字符初始化，系统不会添加 '\0'
    char str2[] = "hello";  // 以字符串初始化，系统会给字符串添加 '\0'

    printf("sizeof(str1) = %d\n", sizeof(str1));  // 5
    printf("sizeof(str2) = %d\n", sizeof(str2));  // 6

    // %s 输出的内容 从数组的第0个元素开始逐个输出 直到遇到 '\0' 结束
    printf("%s\n", str1);
    printf("%s\n", str2);
}

void test11() {
    char buf[128] = "";
    printf("input string\n");
    gets(buf);

    printf("buf = %s\n", buf);
}

void test12() {
    char buf[10] = "";
    printf("input string\n");

    fgets(buf, sizeof(buf), stdin);

    printf("buf = %s\n", buf);
}

void test13() {
    char c = 'a';

    // 小写 变 大写
    c = c - 32;
    printf("c = %c\n", c);

    // 大写 变 小写
    c = c + 32;
    printf("c = %c\n", c);
}

void test14() {
    char str[3][20] = {"hello", "world!", "It is my life!"};

    printf("%s\n", str[0]);
    printf("%s\n", str[1]);
    printf("%s\n", str[2]);
}

int main() {
    test14();
    return 0;
}

