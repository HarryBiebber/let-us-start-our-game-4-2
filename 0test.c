#define _CRT_SECURE_NO_WARNINGS 1
#include "stdio.h"
int v_cal = 2023;
//一个函数如果不写函数类型，默认返回int类型
int Addd(int x, int y,int* num1)
{
	(*num1)++;//写一个函数，每调用一次这个函数num的值就加1
	//求两个数之和
	return x + y;
} 

int get_max(int x, int y)
{//去两个数之间的最大值
	int z = 0;
	if (x > y)
		z = x;
	else
		z = y;
	return z;
}

void Swap(int* pa, int* pb)
{
	//交换两个数
	int temp;
	temp = *pa;
	*pa = *pb;
	*pb = temp;
}

int Runnian(int x)
{
	//判断是否为闰年
	return (x % 4 == 0 && x % 100 != 0) || x % 400 == 0;
}

int half_find(int arr2[],int x,int z)
{
	//实现二分查找
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
	//接受一个整型值，按照顺序打印他的每一位。例如：输入：1234，输出1 2 3 4
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
		//编写函数不允许创建临时变量，求字符串的长度ya
}
 

int Fib(int x)
{
	//求第n个斐波那契数列
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
	//摸了两天鱼了
}
