#include <stdio.h>

int main(int argc, char const *argv[])
{
    // 8位
    char c = -128;
    printf("         char: %d, sizeof: %lu\n", c, sizeof(c));
    unsigned char uc = 255;
    printf("unsigned char: %u, sizeof: %lu\n", uc, sizeof(uc));

    // 16位
    short s = -1234;
    printf("         short: %hd, sizeof: %lu\n", s, sizeof(s));
    unsigned short us = 1234;
    printf("unsigned short: %u, sizeof: %lu\n", us, sizeof(us));

    // 32位
    int i = -1234567;
    printf("         int: %d, sizeof: %lu\n", i, sizeof(i));
    unsigned int si = 1234567;
    printf("unsigned int: %u, sizeof: %lu\n", si, sizeof(si));

    // 64位
    long l = -123456789L;
    printf("         long: %ld, sizeof: %lu\n", l, sizeof(l));
    unsigned long sl = 123456789LU;
    printf("unsigned long: %lu, sizeof: %lu\n", sl, sizeof(sl));

    // 128位
    long long ll = -123456789LL;
    printf("         long long: %lld, sizeof: %lu\n", ll, sizeof(ll));
    unsigned long long sll = 123456789LLU;
    printf("unsigned long long: %llu, sizeof: %lu\n", sll, sizeof(sll));

    return 0;
}
