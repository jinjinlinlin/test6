#define _CRT_SECURE_NO_WARNINGS 1

//计算一个数组成的前n项之和
//例如a+aa+aaa+aaaa+aaaaa.....
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int n = 0;
//	scanf("%d %d", &a, &n);
//	int i = 0;
//	//a2=a1*10+a
//	int t = 0;//一项
//	int sum = 0;//求和
//	for (i = 0; i < n; i++)
//	{
//		t = t* 10 + a;
//		sum = sum + t;
//	}
//	printf("%d", sum);
//	return 0;
//}


//函数计算数组长度
//
//#include<stdio.h>
//int my_strlen(char *a)
//{
//	int count = 0;
//	while (*a)
//	{
//		*a++;
//		count++;
//	}
//	
//	return count;
//}
//int main()
//{
//	char arr[] = { "hello world"};
//	int len = my_strlen(arr);
//	printf("%d", len);
//	return 0;
//
//}


//
//判断1-10000之间有几个自幂数
//
#include<stdio.h>
#include<math.h>
int main()
{
	int i = 0;
	for (i = 0; i <= 10000; i++)
	{
		//1.判断i是几位数
		int n = 1;
		int tmp = i;
		while (tmp/10)
		{
			tmp = tmp / 10;
			n++;
		}
		//2.计算每位的n次幂
		tmp = i;
		int sum = 0;
		while (tmp)
		{
			sum += pow(tmp % 10, n);
			tmp = tmp / 10;
		}
		//3.判断
		if (sum == i)
		{
			printf("%d\n", sum);
		}
	}
	return 0;
}