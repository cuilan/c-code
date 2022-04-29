#include <stdio.h>

/**
 * @brief 控制台输入
 *
 * @param argc
 * @param argv
 * @return int
 */
int main(int argc, char const *argv[])
{
	int a;
	printf("请输入: ");
	scanf("%d", &a);
	printf("result = %d\n", a);
}
