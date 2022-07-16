#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

void test()
{
	int n, i, left, right, mid, sz = 0;
	char arr[200];
	for (i = 0; i < 200; i++)
		arr[i] = i + 1;
	sz = sizeof(arr) / sizeof(arr[0]);	//数组元素个数，sizeof取的是占空间大小
	left = 0;	//左下标
	right = sz - 1;		//右下标
	printf("\n请输入要查找的值：");
	scanf("%d", &n);
	while (left <= right)
	{
		mid = (left + right) / 2;	//中间值

		if (n < arr[mid])
			right = mid - 1;
		else if (n > arr[mid])
			left = mid + 1;
		else
		{
			printf("找到了,其下标为%d", mid);
			break;
		}
	}
	if (left > right)
		printf("找不到捏...");
}

int main()			//二分法查找元素
{
	int o;
	char choice;
	while (1)
	{
		test();
		printf("\n是否退出？（Y/N）");
		while (getchar() != '\n')
			;
		choice = getchar();
		if (choice == 'Y')
			exit(0);
		printf("\n");
		for (o = 0; o < 10; o++)
			printf("--");
	}
	return 0;
}