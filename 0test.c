#define _CRT_SECURE_NO_WARNINGS 1
#include "stdio.h"
int v_cal = 2023;
//һ�����������д�������ͣ�Ĭ�Ϸ���int����
int Addd(int x, int y,int* num1)
{
	(*num1)++;//дһ��������ÿ����һ���������num��ֵ�ͼ�1
	//��������֮��
	return x + y;
} 

int get_max(int x, int y)
{//ȥ������֮������ֵ
	int z = 0;
	if (x > y)
		z = x;
	else
		z = y;
	return z;
}

void Swap(int* pa, int* pb)
{
	//����������
	int temp;
	temp = *pa;
	*pa = *pb;
	*pb = temp;
}

int Runnian(int x)
{
	//�ж��Ƿ�Ϊ����
	return (x % 4 == 0 && x % 100 != 0) || x % 400 == 0;
}

int half_find(int arr2[],int x,int z)
{
	//ʵ�ֶ��ֲ���
	int left = 0;
	int right = z-1;
	int middle = (left + right) / 2;

	while (left <= right)
	{
		middle = (left + right) / 2;
		if (arr2[middle] < x)
		{
			left = middle + 1;
		}
		else if (arr2[middle] > x)
		{
			right = middle - 1;
		}
		else
			return middle;
	}
	if (left > right)
		return -1;
}

void print(unsigned int x)
{
	//����һ������ֵ������˳���ӡ����ÿһλ�����磺���룺1234�����1 2 3 4
	if (x >9 )
	{
		print( x / 10);
	}
	printf("%d ", x % 10);
}

void stackflow(int i)
{
	if (i < 10000)
	{
		stackflow(i + 1);
	}
}

int my_strlen(char* arr1)
{
	if (*arr1 != '\0')
	{
		return 1 + my_strlen(arr1 + 1);
	}
	else
		return 0;
		//��д��������������ʱ���������ַ����ĳ���ya
}
 

int Fib(int x)
{
	//���n��쳲���������
	if (x <= 2)
	{
		return 1;
	}
	else
	{
		return Fib(x - 1) + Fib(x - 2);
	}
}

int Fib_while(int x)
{
	int a = 1;
	int b = 1;
	int c = 1;
	while (x > 2)
	{
		c = a + b;
		a = b;
		b = c;
		x--;
	}
	return c;
}

int Handnuoi()
{
	
	return 0;
}

void reverse_string(char arr1)
{
	int i = 0;
	//������������
}
