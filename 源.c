#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

void test()
{
	int n, i, left, right, mid, sz = 0;
	char arr[200];
	for (i = 0; i < 200; i++)
		arr[i] = i + 1;
	sz = sizeof(arr) / sizeof(arr[0]);	//����Ԫ�ظ�����sizeofȡ����ռ�ռ��С
	left = 0;	//���±�
	right = sz - 1;		//���±�
	printf("\n������Ҫ���ҵ�ֵ��");
	scanf("%d", &n);
	while (left <= right)
	{
		mid = (left + right) / 2;	//�м�ֵ

		if (n < arr[mid])
			right = mid - 1;
		else if (n > arr[mid])
			left = mid + 1;
		else
		{
			printf("�ҵ���,���±�Ϊ%d", mid);
			break;
		}
	}
	if (left > right)
		printf("�Ҳ�����...");
}

int main()			//���ַ�����Ԫ��
{
	int o;
	char choice;
	while (1)
	{
		test();
		printf("\n�Ƿ��˳�����Y/N��");
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