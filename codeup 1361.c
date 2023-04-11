#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int num;
	scanf("%d", &num);
	int space = 0;
	for (int i = 1; i <= num; i++)
	{
		for (int j = 1; j <= space; j++)
		{
			printf(" ");
		}
		printf("**\n");
		space++;
	}
	return 0;
}