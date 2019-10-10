// 4.生命周期概念.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
// 3.作用域概念.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

int Gdata = 1;//全局变量  程序运行的时候产生 程序退出的时候一起销毁
void fun(int* data);
int main()
{

	std::cout << "main:Gdata\t" << ::Gdata << std::endl;
	int Ldata = 2; //局部变量 main函数执行的时候产生 main 函数退出后回收
	std::cout << "main:Ldata\t" << Ldata << std::endl;
	fun(&Ldata);//传参不影响数据
	std::cout << "main:Ldata\t" << Ldata << std::endl;
}
void fun(int* data)//进入函数后产生 退出后销毁
{
	*data = *data + 2;//形参修改后不影响实参
	std::cout << "fun:Ldata\t" << *data << std::endl;

	int Gdata = 4;//定义与全局变量一样的局部变量
	std::cout << "fun:Gdata\t" << Gdata << std::endl;
	//如何使用被覆盖的全局变量
	std::cout << "fun:::Gdata\t" << ::Gdata << std::endl;
}
