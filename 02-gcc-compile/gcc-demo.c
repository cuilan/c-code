#include <stdio.h>

/**
 * gcc 分步编译
 * 1. gcc -E gcc-demo.c -o gcc-demo.i    预处理
 * 2. gcc -S gcc-demo.i -o gcc-demo.s    编译
 * 3. gcc -c gcc-demo.s -o gcc-demo.o    汇编
 * 4. gcc gcc-demo.o -o gcc-demo         链接
 * 
 * @return int 
 */
int main()
{
    printf("%s\n", "HelloWorld!");
    return 0;
}