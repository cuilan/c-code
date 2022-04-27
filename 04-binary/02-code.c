#include <stdio.h>

/**
 * @brief 验证补码存储
 *
 * @param argc
 * @param argv
 * @return int
 */
int main(int argc, char const *argv[])
{
    // 初始化一个字节，1000 0001
    char c = 0x81;
    // 输出结果为 -127
    printf("%d\n", c);
    return 0;
}
