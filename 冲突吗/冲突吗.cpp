// 冲突吗.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
union U {
	char str[2];
	short int num;
};
int main()
{
	U u;
	u.num = 266;
    std::cout << "Hello World!\n"; 
}

