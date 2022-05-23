#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a = 5;
    int b = 2;
    double c = 5 / 2;
    // 两数相除，结果要想得到小数，除数或被除数必须有一个是小数，否则只会取整
    printf("5 / 2 = %lf\n", c);

    c = 1 / 2;
    // 取整
    printf("1 / 2 = %lf\n", c);

    c = 1.0 / 2;
    // 结果为：0.500000
    printf("1.0 / 2 = %lf\n", c);

    return 0;
}
