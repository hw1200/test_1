#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void unsigned_int()
{
	unsigned int number_1, number_2, sum;
	number_1 = 0x7fffffff;
	number_2 = 1;
	sum = number_1 + number_2;
	printf("sum=%u", sum);
}

void double_test()
{
	double a = 1.23456789e8, b;
	b = a + 20;
	printf("a=%0.2f,b=%0.2f\n", a, b);
	a = 1.456;
	if (a - 1.456 >= -1e-6 && a - 1.456 <= 1e-6)
	{
		printf("a is 1.456\n");
	}
	else
	{
		printf("a is not 1.456\n");
	}
	a = 4.5;
}

void double_test_1()
{
	double b = 1e-4;
	printf("b=%f", b);
	return 0;
}

void multiplication_table()
{
	//九九乘法表
	int number_1, number_2, sum;
	for (number_1 = 1; number_1 <= 9; number_1++)
	{
		for (number_2 = 1; number_2 <= number_1; number_2++)
		{
			sum = number_1 * number_2;
			printf("%d*%d=%d\t", number_2, number_1, sum);
		}
		printf("\n");
	}
}

void rhomboid()
{
	//菱形
	int hang, space, xin, sum;
	printf("请输入一个数:");
	scanf_s("%d", &sum);
	for (hang = 1; hang <= sum; hang++)
	{
		for (space = 1; space <= sum - hang; space++)
		{
			printf(" ");
		}
		for (xin = 1; xin <= (sum + 1) - space; xin++)
		{
			printf("* ");
		}
		printf("\n");
	}
	for (hang = 1; hang <= sum - 1; hang++)
	{
		for (space = 0; space <= hang - 1; space++)
		{
			printf(" ");
		}
		for (xin = 1; xin <= sum - hang; xin++)
		{
			printf("* ");
		}
		printf("\n");
	}
}

void test_1()
{
	char c = 'A';
	int i = 0;
	//char* p = "helloworld";
	printf("%c\n", c);
	printf("%d\n", c);
	/*for (i = 0; i <= 4; i++)
	{
		printf("%c", 0xCC);
	}*/
	//printf("abd\rb\n");
	//printf("abc\b \bd\n");图形化显示
	printf("\tk\n");
	printf("\\\n");
	printf("\123\n");
}


int main()
{
	//unsigned_int();

	//double_test();

	//double_test_1();

	//multiplication_table();

	rhomboid();

	//test_1();


	return 0;
}