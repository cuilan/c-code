# Makefile的规则
# target ... : prerequisites ...
# 	commands
#
# target: 目标文件
# prerequisites: 依赖文件
# commands: 命令

# 定义编译器
CC = gcc

# 定义编译选项
CFLAGS = -Wall -g

# 定义链接选项
LDFLAGS =

# 定义源文件
SOURCES = main.c message.c

# 定义可执行文件
TARGET = main

# 定义目标文件
OBJECTS = $(SOURCES:.c=.o)

# ============================

# 默认目标
all: $(TARGET)
	@echo "Build success!"

# 生成目标文件
# $^: 表示所有的依赖文件
$(TARGET): $(OBJECTS)
	$(CC) $(CFLAGS) $(LDFLAGS) $^ -o $@
	@echo "Link success!"

# 生成中间文件，所有的.c文件都会生成对应的.o文件
# $<: 表示第一个依赖文件
# $@: 表示目标文件
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@
	@echo "Compile success!"

# 清理
clean:
	rm -f *.o $(TARGET)
	@echo "Clean success!"

.PHONY: clean all