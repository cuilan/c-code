#include <stdio.h>

/**
 * @brief 格式化输出
 *
 * @param argc
 * @param argv
 * @return int
 */
int main(int argc, char const *argv[])
{
    // 标准格式化输出
    printf("标准十进制输出: %d\n", 1);

    // %5d 以5个字符输出，没有的字符以空字符填充，默认是右对齐
    printf("%%5d输出: '%5d'\n", 123);

    // %05d 以5个字符输出，没有的字符以0填充，默认是右对齐
    printf("%%05d输出: '%05d'\n", 123);

    // %-5d 以5个字符输出，没有的字符以空字符填充，-代表左对齐
    printf("%%-5d输出: '%-5d'\n", 123);

    // 0 和 - 不能同时使用
    // printf("'%-05d'\n", 123);

    double b = 3.14;
    // 3.140000 double 类型格式化输出，小数点后有6位数
    printf("double类型%%lf输出: '%lf'\n", b);

    // %8.3 格式输出，8代表总共8位长度，3代表小数点后有3位
    printf("%%8.3lf输出: '%8.3lf'\n", b);

    // putchar 输出字符
    char c = 'a';
    putchar(c);
    putchar('\n');

    return 0;
}
