// ConsoleApplication3.cpp : 定義主控台應用程式的進入點。
//

#include "stdafx.h"
#include<iostream>


int main()
{
	std::cout << "键入2个数字：" << std::endl;
	int v1 = 0, v2 = 0;
	std::cin >> v1 >> v2;
	std::cout << "两数和为：" << v1 << "end" << v2 << "is" << v1 + v2 << std::endl;
    return 0;
}

