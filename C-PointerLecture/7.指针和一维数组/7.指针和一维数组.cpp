// 7.指针和一维数组.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

float average(int* pData, int num);
int main()
{
	int table[] = {1,2,4,7,9,4,0,2,2};

	float ans = average(table, sizeof(table)/sizeof(int));
	printf("average:%f\n",ans);
	return 0;
}
float average(int* pData, int nums)
{
	float ans = 0;
	for (int i = 0; i < nums; i++)
	{
		ans += i[pData]/ (float)nums;
		//ans += *(i+pData) / (float)nums;
	}
	return ans ;
}