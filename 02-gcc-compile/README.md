# gcc 分步编译

## 1.预处理
`gcc -E gcc-demo.c -o gcc-demo.i`

## 2.编译
`gcc -S gcc-demo.i -o gcc-demo.s`

## 3.汇编
`gcc -c gcc-demo.s -o gcc-demo.o`

## 4.链接
`gcc gcc-demo.o -o gcc-demo`