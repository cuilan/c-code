#include <stdio.h>

/**
 * @brief 限定符
 *
 * @param argc
 * @param argv
 * @return int
 */
int main(int argc, char const *argv[])
{
    // extern 声明的变量没有建立存储空间
    extern int a;

    // const 定义一个常量
    const int b = 1;

    // volatile 方式编译器优化代码
    volatile int c = 2;

    // register 定义寄存器变量，提高效率，register是建议型指令，而不是命令型指令，如果CPU有空闲寄存器才会生效
    register int d = 3;

    return 0;
}
