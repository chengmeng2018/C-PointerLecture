// 1.数据类型.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

//#include <iostream>
#include <stdio.h>
int fun()
{
	return 0;
}
int main()
{
	printf("bool\t %d\n", sizeof(bool));
	printf("char\t %d\n", sizeof(char));
	printf("short\t %d\n", sizeof(short));
	printf("int\t %d\n", sizeof(int));
	printf("long\t %d\n", sizeof(long));
	printf("float\t %d\n", sizeof(float));
	printf("double\t %d\n", sizeof(double));


	printf("\nvoid*\t %d\n", sizeof(void*));
	printf("bool*\t %d\n", sizeof(bool*));
	printf("char*\t %d\n", sizeof(char*));
	printf("short*\t %d\n", sizeof(short*));
	printf("int*\t %d\n", sizeof(int*));
	printf("long*\t %d\n", sizeof(long*));
	printf("float*\t %d\n", sizeof(float*));
	printf("double*\t %d\n", sizeof(double*));
	struct MyStruct
	{
		char a;
		char b;
	};
	printf("\nMyStruct\t %d\n", sizeof(MyStruct));
	printf("MyStruct*\t %d\n", sizeof(MyStruct*));

	printf("\nint fun()\t %d\n", sizeof(fun()));
	printf("\nint fun()*\t %d\n", sizeof(&fun));

	//1.指针也是变量 他也占用空间 void* 
	//2.指针长度取决于软件 32\64 
	

   // std::cout << "Hello World!\n"; 
}
