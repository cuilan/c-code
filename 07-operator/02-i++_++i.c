#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a = 1;
    int b = 0;

    // i++
    // 1.先把a赋值给b
    // 2.a再加1
    b = a++;
    printf("a = %d, b = %d\n", a, b);

    a = 1;
    b = 0;

    // ++i
    // 1.a先加1
    // 2.再把a赋值给b
    b = ++a;
    printf("a = %d, b = %d\n", a, b);

    a = 1;
    b = 0;
    a++;
    b = a;
    printf("a = %d, b = %d\n", a, b);

    return 0;
}
