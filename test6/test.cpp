#define _CRT_SECURE_NO_WARNINGS 1

//����һ������ɵ�ǰn��֮��
//����a+aa+aaa+aaaa+aaaaa.....
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int n = 0;
//	scanf("%d %d", &a, &n);
//	int i = 0;
//	//a2=a1*10+a
//	int t = 0;//һ��
//	int sum = 0;//���
//	for (i = 0; i < n; i++)
//	{
//		t = t* 10 + a;
//		sum = sum + t;
//	}
//	printf("%d", sum);
//	return 0;
//}


//�����������鳤��
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
//�ж�1-10000֮���м���������
//
#include<stdio.h>
#include<math.h>
int main()
{
	int i = 0;
	for (i = 0; i <= 10000; i++)
	{
		//1.�ж�i�Ǽ�λ��
		int n = 1;
		int tmp = i;
		while (tmp/10)
		{
			tmp = tmp / 10;
			n++;
		}
		//2.����ÿλ��n����
		tmp = i;
		int sum = 0;
		while (tmp)
		{
			sum += pow(tmp % 10, n);
			tmp = tmp / 10;
		}
		//3.�ж�
		if (sum == i)
		{
			printf("%d\n", sum);
		}
	}
	return 0;
}