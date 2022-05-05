#include <stdio.h>

/**
 * @brief 整型输入
 *
 */
void scanInt()
{
    int a;
    printf("请输入: ");
    scanf("%d", &a);
    printf("输入结果为: %d\n", a);

    // 输入多个，默认以空格分隔
    int b, c;
    printf("请输入b, c: ");
    scanf("%d %d", &b, &c);
    printf("b = %d, c = %d\n", b, c);
}

/**
 * @brief 字符型输入
 *
 */
void scanChar()
{
    char a;
    printf("请输入字符: ");
    scanf("%c", &a);
    printf("结果为: %c\n", a);

    // 处理 \n 换行符
    getchar();

    printf("请输入字符: ");
    getchar();
    printf("结果为: %c\n", a);
}

/**
 * @brief 标准格式化输入
 *
 * @param argc
 * @param argv
 * @return int
 */
int main(int argc, char const *argv[])
{
    // scanInt();
    scanChar();

    return 0;
}
