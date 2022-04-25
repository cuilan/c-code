
#include <stdio.h>
#include <stdlib.h>

int main()
{
	printf("before system\n");
	system("ls -alh");
	printf("after system\n");
	return 0;
}
