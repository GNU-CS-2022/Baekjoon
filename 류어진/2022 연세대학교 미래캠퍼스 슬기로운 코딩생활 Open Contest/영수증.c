//아직 수정중
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
struct all {
	int one_money[1000001];
	int one_num[11];
};


int main()
{
	int sum_money;
	scanf_s("%d", &sum_money);
	sum_money >= 0 && sum_money <= 1000000000;

	int num;
	scanf_s("%d", &num);
	num >= 0 && num <= 100;

	struct all one;
	for (int i = 0; i < num; i++)
	{
		scanf_s("%s %s", one.one_money, one.one_num);
	}
	int sum = 0;
	for (int i = 0; i < num; i++)
	{
		sum = sum +(one.one_money[i] * one.one_num[i]);
	}
	if (sum_money == sum)
	{
		printf("Yes");
	}
	else
	{
		printf("No");
	}

	return 0;
}