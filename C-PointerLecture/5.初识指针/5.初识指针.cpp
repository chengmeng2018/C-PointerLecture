// 5.初识指针.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

using namespace std;
int myabs(int data);
float average(char* p, int nums);
int main()
{
	std::cout << "\t5.指针是什么？\n";
	std::cout << "指针存在的意义？\n";

	int AData = 1;
	AData=myabs(AData);
	printf("%d=myabs(AData);\n", myabs(AData));
	char tab[10] = {1,2,3,4,5,6};
	
	printf("%f=average(tab, 10);\n", average(tab, 10));
}
int  myabs(int data)
{
	if (data>0)
	{
		return data;
	}
	else
	{
		return -data;
	}
}
float average(char* p, int nums)
{
	float ans = 0;
	for (int i = 0; i < nums; i++)
	{
		ans += p[i];
	}
	return ans / nums;
}