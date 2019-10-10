// 6.指针和单元素变量.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

using namespace std;

void myabs(int* data);
int main()
{
	int data = -02;
	cout << "before:" << data << endl;
	myabs(&data);

	cout <<"after:"<< data << endl;
}
void myabs(int* pdata)
{
	if (*pdata>0)
	{
		return ;
	}
	else
	{
		*pdata = -(*pdata);
	}
}