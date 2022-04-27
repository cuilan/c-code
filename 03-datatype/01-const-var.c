
// gcc -E 01-const-var.c -o 01-const-var.i

// # 开头的语句是预处理语句，无需分号结束
// 定义一个宏定义的标识符 MAX 常量
#define MAX 100

int main(int argc, char const *argv[])
{
    // 常量
    MAX;
    // 常量
    const int a = 10;
    // 变量
    int b = 20;
    return 0;
}
