
#include <stdio.h>

int main(int argc, char const *argv[])
{
    // 十进制
    int ten = 123456789;
    // 十进制数格式化 %d
    printf("[10] %d\n", ten);
    // 八进制数格式化 %o
    printf("[8] %o\n", ten);
    // 十六进制数格式化 %o
    printf("[16] %x\n", ten);

    // 八进制
    int otc = 0123;
    printf("[8] %o\n", otc);

    // 十六进制
    int hex = 0xabcdef;
    printf("[16] %x\n", hex);

    return 0;
}
