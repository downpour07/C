/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int n;
	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (int i = n - 1; i > 0; i--)
	{
		for (int j = i; j > 0; j--)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
*/

/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int n, i, j;
	scanf("%d", &n);
	for (i = 0; i < n / 2 + 1; i++)
	{
		for (j = 0; j < n / 2 - i; j++)
			printf(" ");
		for (j = 0; j < i * 2 + 1; j++)
			printf("*");
		printf("\n");
	}
	return 0;
}
*/

/*
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
*/

/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if ((i == 1) || (i == n) || (j == 1) || (j == n) || (i == j) || (i + j == n + 1))
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}
*/

/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int n;
	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if ((i == 1) || (i == n) || (j == 1) || (j == n) || (i == j) || (i + j == n + 1)||(i==n/2+1)||(j==n/2+1))
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}
*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	for (int i = 1; i <= 2 * n; i++)
	{
		for (int j = 1; j <= 2 * n; j++)
		{

			if (i + j == n + 1)
			{
				printf("*");
			}
			else if (i + j == n + 2 * i)
			{
				printf("*");
			}
			else if (i + j == n + 2 * j)
			{
				printf("*");
			}
			else if (i + j == 3 * n + 1)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}
*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int n, sum = 0, temp = 0;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		temp += i;
		sum += temp;
	}
	printf("%d", sum);
	return 0;
}
*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int k;
	scanf("%d", &k);
	for (int n1 = 1; n1 <= 6; n1++)
	{
		for (int n2 = 1; n2 <= 6; n2++)
		{
			if (n1 + n2 == k)
			{
				printf("%d %d\n", n1, n2);
			}
		}
	}

	return 0;
}
*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	for (int i = 1; i <= 9; i++)
	{
		for (int j = 2; j <= 5; j++)
		{
			printf("%d x %d = %2d\t", j, i, j * i);
		}
		printf("\n");
	}

	return 0;
}
*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int n, m;
	scanf("%d %d", &n, &m);
	for (int i = 1; i <= m; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if ((i == 1 || i == m) && (j == 1 || j == n))
			{
				printf("+");
			}
			else if (i == 1 || i == m)
			{
				printf("-");
			}
			else if (j == 1 || j == n)
			{
				printf("|");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}
*/


/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int a, b, result;
	scanf("%d", &a);
	for (int i = 1; i <= a; i++)
	{
		scanf("%d", &b);
		if (i == 1)
		{
			result = b;
		}
		if (i > 1 && result <= b)
		{
			result = b;
		}
	}
	printf("%d", result);

	return 0;
}
*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	int cnt = 0;
	while (n != 0)
	{
		n = n / 10;
		cnt++;
	}
	printf("%d", cnt);
	return 0;
}
*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num;
	scanf("%d", &num);

	for (int i = 2; i <= num; ++i)
	{
		if (num % i == 0)
		{
			int j;
			for (j = 2; j <= (i) / 2; ++j)
			{
				if ((i) % j == 0)
					break;
			}
			int k;
			for (k = 2; k <= (num / i) / 2; ++k)
			{
				if ((num / i) % k == 0)
					break;
			}
			if (j == i / 2 + 1 && k == (num / i) / 2 + 1)
			{
				printf("%d %d", i, num / i);
				return 0;
			}
		}
	}
	printf("wrong number");
	return 0;
}
*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n, a = 0, b = 0;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		n += n - 1;
		a = (n - 1) / 2;
		if (i == a)
		{
			printf("*");
		}
		else if (i == n)
		{
			printf("\n");
		}
		else
		{
			printf(" ");
		}
	}
	return 0;
}
*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a; int i, j; int d = 0; //변수 a, i, j, d

	scanf("%d", &a); //변수 a에 저장

	for (i = a; i >= 1; i--) //i는 a고 i가 1보다 크거나 같을 때 실행
	{
		d++; //d에 +1
		for (j = i; j >= 2; j--) //j는 i고 j가 2보다 크거나 같을 때 => 공백 출력
		{
			printf(" ");
		}
		for (int c = 1; c <= d; c++) //c는 1이고 c가 d(반복된 수)보다 작거나 같을 때 => * 출력
		{
			printf("*");
		}
		for (int z = 1; z <= d - 1; z++) //z는 1이고 z가 d(반복된 수)보다 작거나 같을 때 => * 출력
		{
			printf("*");
		}
		printf("\n"); //줄바꿈
	}

	d = 0; //d를 0으로 초기화

	for (i = 1; i <= a; i++)//i는 1이고 i가 a보다 작거나 같으면 실행
	{
		d++; //d에 +1
		for (j = 1; j <= i; j++) //j는 1이고 j가 1보다 작거나 같으면 => 공백 출력
		{
			printf(" ");
		}
		for (int c = a; c >= i + 1; c--) //c는 a이고 c가 1보다 크거나 같으면 => * 출력
		{
			printf("*");
		}
		for (int z = a; z >= d + 2; z--) //z는 a이고 z가 d(반복된 수)보다 크거나 같으면 => * 출력
		{
			printf("*");
		}
		printf("\n"); //줄 바꿈
	}

	return 0;
}
*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int num;
	int buf[1000] = {0};
	scanf("%d", &num);
	for (int i = 0; i < num; i++)
	{
		scanf("%d", &buf[i]);
	}
	int index = 0;
	for (int k = 0; k < num; k++)
	{
		index = k;
		for (int j = 0; j < num; j++)
		{
			printf("%d ", buf[index]);
			index++;
			if (index == num)
			{
				index = 0;
			}
		}
		printf("\n");
	}
	return 0;
}
*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int a, n, big = 0, small = 100;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		scanf("%d", &a);
		if (big < a)
		{
			big = a;
		}
		else if (small >= a)
		{
			small = a;
		}
	}
	printf("%d %d", big, small);

	return 0;
}
*/

/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	double h, w;
	h = n / 4;
	w = (n - h * 2) / 2;
	printf("%.0lf", h * w);

	return 0;
}
*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	if (((double)n / 4 - n / 4) > 0.5)
	{
		printf("%.0lf", (double)n / 4);
	}
	else
	{
		printf("%d", n / 4);
	}
	return 0;
}
*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	for (int i = n; i >= 1; i--)
	{
		for (int j = 1; j <= i; j++)
		{
			printf("%d ", i);
		}
		printf("\n");
	}
	return 0;
}
*/

/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int n, a = 1;
	scanf("%d", &n);
	int b = n * (n + 1) / 2;
	int i = b;
	for (int j = 1; j <= n; j++)
	{
		for (; a <= j; i--)
		{
			printf("%d ", i);
			a++;
		}
		printf("\n");
		a = 1;
	}
	return 0;
}
*/

/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	char a[100];
	scanf("%s", a);
	if (a[0] == 'l' && a[1] == 'o' && a[2] == 'v' && a[3] == 'e' && a[4]=='\0')
	{
		printf("I love you.");
	}
	return 0;
}
*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int a;
	scanf("%d", &a);
	if (a < 60)
	{
		printf("0 0 0 %d", a);
	}
	else
	{
		if (a >= 60 && a < 3600)
		{
			printf("0 0 %d %d", a / 60, a % 60);
		}
		else
		{
			if (a>=3600 && a<86400)
			{
				printf("0 %d %d %d", a / 60 / 60, a / 60 % 60, a % 60);
			}
			else
			{
				printf("%d %d %d %d", a / 60 / 60 / 24, a / 60 / 60 % 24, a / 60 % 60, a % 60);
			}
		}
	}
	return 0;
}
*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	while (n > 0)
	{
		printf("hello\n");
		n--;
	}
	return 0;
}
*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	char arr[10] = { 0 };
	scanf("%s", arr);
	printf("welcome! ");
	for (int i = 0; arr[i] != '\0'; i++)
	{
		printf("%c", arr[i]);
	}
	return 0;
}
*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	char a[100];
	scanf("%s", a);
	if (a[0] == 'I' && a[1] == 'O' && a[2] == 'I' && a[3] == '\0')
	{
		printf("IOI is the International Olympiad in Informatics.");
	}
	else
	{
		printf("I don't care.");
	}
	return 0;
}
*/

/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	printf("special characters\n[\\n,\\\",\\\\] is very important.");
	return 0;
}
*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int arr[100];
	int  sum = 0;
	for (int i = 0; arr[i] != '\0'; i++)
	{
		scanf("%d", &arr[i]);
		sum++;
	}
	for (int i = sum; i >= 0; i--)
	{
		printf("%d", arr[i]);
	}
	return 0;
}
*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int a, b, sum = 0;
	scanf("%d %d", &a, &b);
	for (int i = 1; i <= a && i <= b; i++)
	{
		if (a % i == 0 && b % i == 0)
		{
			sum = i;
		}
	}
	printf("%d", sum);
	return 0;
}
*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int n, sum = 0;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			sum += i;
		}
	}
	printf("%d", sum);
	return 0;
}
*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int a1, a2, a3, b1, b2, b3, c1, c2, c3, x, y, z;
	scanf("%d %d %d\n%d %d %d\n%d %d %d", &a1, &a2, &a3, &b1, &b2, &b3, &c1, &c2, &c3);
	x = a1 + b1 + c1;
	y = a2 + b2 + c2;
	z = a3 + b3 + c3;
	printf("%d %d %d %d\n", a1, a2, a3, a1 + a2 + a3);
	printf("%d %d %d %d\n", b1, b2, b3, b1 + b2 + b3);
	printf("%d %d %d %d\n", c1, c2, c3, c1 + c2 + c3);
	printf("%d %d %d %d", x, y, z, x + y + z);
	return 0;
}
*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, b, c, i;
	scanf("%d %d %d", &a, &b, &c);
	for (i = a < b ? (a < c ? a : c) : (b < c ? b : c); i > 0; i--)
	{
		if (!(a % i) && !(b % i) && !(c % i))
		{
			break;
		}
	}
	printf("%d", i);
	return 0;
}
*/

/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	char arr[101]; //배열 선언
	int len = 0; //글자 수 변수 선언
	scanf("%[^\n]", arr); //공백을 포함한 값 저장
	for (int i = 0; arr[i] != NULL; i++) //값이 끝날 때까지 반복
	{
	    len++;//글자 수에 +1
	}
	for (int i = len-1; i >= 0; i--) //글자수 -1 값부터 0이 될때까지 반복
	{
		printf("%c", arr[i]);//변수 값 출력
	}
	return 0;
}
*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char arr[101];
	int sum = 0, num = 0;
	scanf("%s", arr);

	for (int i = 0; arr[i] != '\0'; i++)
	{
		if (arr[i] == 'c' || arr[i] == 'C')
		{
			sum++;
			if (arr[i + 1] == 'c' || arr[i + 1] == 'C')
			{
				num++;
			}
		}
	}
	printf("%d\n%d", sum, num);
	return 0;
}
*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, b;
	int plus = 0, minus = 0, mult = 0;
	scanf("%d %d", &a, &b);
	plus = a + b;
	minus = a - b;
	mult = a * b;
	if (plus > minus && plus < mult || plus < minus && plus > mult)
	{
		printf("%d", plus);
	}
	else if (minus > plus && minus < mult || minus < plus && minus > mult)
	{
		printf("%d", minus);
	}
	else
	{
		printf("%d", mult);
	}
	return 0;
}
*/
//2762
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char arr[101];
	for (int i = 0; ; i++)
	{
		scanf("%c", &arr[i]);
		if (arr[i] >= 65 && arr[i] <= 90)
		{
			printf("%c", arr[i]);
		}
		else if (arr[i] == NULL)
		{
			break;
		}
	}
	return 0;
}
*/

//2764
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char arr[20];
	scanf("%s", arr);
	printf("+");
	for (int i = 0; arr[i] != '\0'; i++)
	{
		printf("-+");
	}
	printf("\n|");
	for (int i = 0; arr[i] != '\0'; i++)
	{
		printf("%c|", arr[i]);
	}
	printf("\n");
	printf("+");
	for (int i = 0; arr[i] != '\0'; i++)
	{
		printf("-+");
	}
	return 0;
}
*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	for (int i = 2; i <= a && i <= b; i++)
	{
		if (a % i == 0)
		{
			if (b % i == 0)
			{
				printf("no");
				return 0;
			}
		}
	}
	printf("coprime");
	return 0;
}
*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int ks[300];
	int temp;
	for (int i = 0; i < 10; i++) 
	{
		scanf("%d", &temp);
		ks[temp] = temp;
	}
	int n = 0;
	int index = 299;
	while (1) {
		if (ks[index] == NULL)
		{
			index--;
			continue;
		}
		n++;
		if (n == 3)
			break;
		index--;
	}
	printf("%d", index);
	return 0;
}
*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int n[300];
int main()
{
	int a;
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &a);
		n[a] = a;
	}
	int b = 0;
	int index = 299;
	while (1)
	{
		if (n[index] == NULL)
		{
			index--;
			continue;
		}
		b++;
		if (b == 3)
		{
			break;
		}
		index--;
	}
	printf("%d", index);
	return 0;
}
*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char arr[100];
	int sum = 0;
	scanf("%[^\n]s", arr);
	for (int i = 0; arr[i] != NULL; i++)
	{
		if (arr[i] == 'l' && arr[i + 1] == 'o' && arr[i + 2] == 'v' && arr[i + 3] == 'e')
		{
			sum++;
		}
	}
	printf("%d", sum);
	return 0;
}
*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, b, c, d, n;
	scanf("%d", &n);
	a = n / 10;
	b = n % 10 / 5;
	c = n % 10 % 5 / 3;
	d = n % 10 % 5 % 3 / 1;
	printf("%d", a+b+c+d);
	return 0;
}
*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n = 997, m = 36, sum = 0;
	for (int i = 1; i <= n; i++)
	{
		if (m % i == 0 || i % m == 0) 
		{
			sum++;
		}
	}
	printf("%d", sum);
	return 0;
}
*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char arr[11] = {0}, n1[11] = {0}, n2[11] = {0}, n3[11] = {0};
	scanf("%s %s %s %s", arr, n1, n2, n3);
	for (int j = 0; n1[j] != '\0'; j++)
	{
		for (int i = 0; i < 10; i++)
		{
			if (arr[i] == n1[j])
			{
				printf("%d", i);
			}
		}
	}
	printf(" ");
	for (int j = 0; n2[j] != '\0'; j++)
	{
		for (int i = 0; i < 10; i++)
		{
			if (arr[i] == n2[j])
			{
				printf("%d", i);
			}
		}
	}
	printf(" ");
	for (int j = 0; n3[j] != '\0'; j++)
	{
		for (int i = 0; i < 10; i++)
		{
			if (arr[i] == n3[j])
			{
				printf("%d", i);
			}
		}
	}
	printf(" ");
	return 0;
}
*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a1, a2, a3, b1, b2;
	float sum = 0;
	scanf("%d %d %d %d %d", &a1, &a2, &a3, &b1, &b2);
	if (a1 <= a2 && a1 <= a3)
	{
		if (b1 <= b2)
		{
			sum = a1 + b1;
			printf("%.1f", sum + sum / 10);
		}
		else
		{
			sum = a1 + b2;
			printf("%.1f", sum + sum / 10);
		}
	}
	else if(a2 <= a1 && a2 <= a3)
	{
		if (b1 <= b2)
		{
			sum = a2 + b1;
			printf("%.1f", sum + sum / 10);
		}
		else
		{
			sum = a2 + b2;
			printf("%.1f", sum + sum / 10);
		}
	}
	else if (a3 <= a1 && a3 <= a2)
	{
		if (b1 <= b2)
		{
			sum = a3 + b1;
			printf("%.1f", sum + sum / 10);
		}
		else
		{
			sum = a3 + b2;
			printf("%.1f", sum + sum / 10);
		}
	}
	return 0;
}
*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num;
	int arr[101][101];
	scanf("%d", &num);
	int x = 1;
	for (int i = 1; i <= num; i++) 
	{
		for (int j = 1; j <= num; j++) 
		{
			arr[i][j] = x;
			x++;
		}
	}
	for (int i = 1; i <= num; i++) 
	{
		for (int j = 1; j <= num; j++) 
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n, a = 1;
	int arr[101][101];
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			arr[i][j] = a;
			a++;
		}
	}
	for (int i = 1; i <= n; i++)
	{
		for (int j = n; j >= 1; j--)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n, a = 1;
	int arr[101][101];
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			arr[i][j] = a;
			a++;
		}
	}
	for (int j = 1; j <= n; j++)
	{
		for (int i = 1; i <= n; i++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
*/

/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n, a = 1;
	int arr[101][101];
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			arr[i][j] = a;
			a++;
		}
	}
	for (int j = n; j >= 1; j--)
	{
		for (int i = 1; i <= n; i++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n, m, a = 1;
	int arr[101][101];
	scanf("%d %d", &n, &m);
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			arr[i][j] = a;
			a++;
		}
	}
	for (int i = n; i >= 1; i--)
	{
		for (int j = m; j >= 1; j--)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n, m, a = 1;
	int arr[101][101];
	scanf("%d %d", &n, &m);
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			arr[i][j] = a;
			a++;
		}
	}
	for (int i = n; i >= 1; i--)
	{
		for (int j = 1; j <= m; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n, m, a = 1;
	int arr[101][101];
	scanf("%d %d", &n, &m);
	for (int i = 1; i <= m; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			arr[i][j] = a;
			a++;
		}
	}
	for (int j = n; j >= 1; j--)
	{
		for (int i = m; i>=1; i--)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n, m, a = 1;
	int arr[101][101];
	scanf("%d %d", &n, &m);
	for (int i = 1; i <= m; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			arr[i][j] = a;
			a++;
		}
	}
	for (int j = 1; j <= n; j++)
	{
		for (int i = m; i >= 1; i--)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n, a = 1;
	int arr[101][101];
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			arr[i][j] = a;
			a++;
		}
	}
	for (int i = 1; i <= n; i++)
	{
		if (i % 2 == 0)
		{
			for (int j = n; j >= 1; j--)
			{
				printf("%d ", arr[i][j]);
			}
			printf("\n");
		}
		else
		{
			for (int j = 1; j <= n; j++)
			{
				printf("%d ", arr[i][j]);
			}
			printf("\n");
		}
	}
	return 0;
}
*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n, a = 1;
	scanf("%d", &n);
	int arr[101][101];
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			arr[i][j] = a;
			a++;
		}
	}
	for (int i = 1; i <= n; i++)
	{
		if (i % 2 != 0)
		{
			for (int j = n; j >= 1; j--)
			{
				printf("%d ", arr[i][j]);
			}
			printf("\n");
		}
		else
		{
			for (int j = 1; j <= n; j++)
			{
				printf("%d ", arr[i][j]);
			}
			printf("\n");
		}
	}
	return 0;
}
*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n, a = 1;
	scanf("%d", &n);
	int arr[101][101];
	for (int i = 1; i <= n; i++) 
	{
		if (i % 2 == 1)
		{
			for (int j = 1; j <= n; j++)
			{
				arr[j][i] = a;
				a++;
			}
		}
		else 
		{
			for (int j = n; j >= 1; j--) 
			{
				arr[j][i] = a;
				a++;
			}
		}
	}
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int arr[101][101];
	int n;
	scanf("%d", &n);
	int a = 1;
	for (int i = 1; i <= n; i++)
	{
		if (i % 2 == 0)
		{
			for (int j = 1; j <= n; j++)
			{
				arr[j][i] = a;
				a++;
			}
		}
		else
		{
			for (int j = n; j >= 1; j--)
			{
				arr[j][i] = a;
				a++;
			}
		}
	}
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++) 
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n, m, a = 1;
	scanf("%d %d", &n, &m);
	int arr[101][101];
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			arr[i][j] = a;
			a++;
		}
	}
	for (int i = n; i >= 1; i--)
	{
		if (i % 2 == 0)
		{
			for (int j = 1; j <= m; j++)
			{
				printf("%d ", arr[i][j]);
			}
			printf("\n");
		}
		else
		{
			for (int j = m; j >= 1; j--)
			{
				printf("%d ", arr[i][j]);
			}
			printf("\n");
		}
	}
	return 0;
}
*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n, m, a = 1;
	scanf("%d %d", &n, &m);
	int arr[101][101];
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			arr[i][j] = a;
			a++;
		}
	}
	for (int i = n; i >= 1; i--)
	{
		if (i % 2 == 0)
		{
			for (int j = m; j >= 1; j--)
			{
				printf("%d ", arr[i][j]);
			}
			printf("\n");
		}
		else
		{
			for (int j = 1; j <= m; j++)
			{
				printf("%d ", arr[i][j]);
			}
			printf("\n");
		}
	}
	return 0;
}
*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n, m, a = 1;
	int arr[101][101];
	scanf("%d %d", &n, &m);
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			arr[i][j] = a;
			a++;
		}
	}
	for (int i = n; i >= 1; i--)
	{
		if (i % 2 == 0)
		{
			for (int j = m; j >= 1; j--)
			{
				printf("%d ", arr[i][j]);
			}
			printf("\n");
		}
		else
		{
			for (int j = 1; j <= m; j++)
			{
				printf("%d ", arr[i][j]);
			}
			printf("\n");
		}
	}
	return 0;
}
*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n, m, a = 1,b=1,arr[101][101];
	scanf("%d %d", &n, &m);
	for (int i = m; i >= 1; i--)
	{
		if (b % 2 != 0)
		{
			for (int j = 1; j <= n; j++)
			{
				arr[j][i] = a;
				a++;
			}
		}
		else
		{
			for (int j = n; j >= 1; j--)
			{
				arr[j][i] = a;
				a++;
			}
		}
		b++;
	}
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int arr[101][101] = { 0 }; //배열 선언
	int n, m;
	scanf("%d %d", &n, &m); //세로 값, 가로 값 입력
	int x = 1, j = 1;
	for (int i = 1; i <= n + m; i++) 
	{
		int temp_i = i;
		if (temp_i > n) //i가 세로 값보다 클 때
		{
			temp_i = n;
			j++;
		}
		int temp_j = j;
		while (temp_i > 0) 
		{
			if (i + 1 == temp_i + temp_j)
			{
				arr[temp_i][temp_j] = x;
				x++;

			}
			temp_i--;
			temp_j++;
			if (temp_j > m) //j값이 가로 값보다 클 때
			{ 
				break;
			}
		}
	}
	for (int i = 1; i <= n; i++) 
	{
		for (int j = 1; j <= m; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
*/
//개미
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int arr[11][11] = { 0 }; //배열 선언
	int i, j;
	for (i = 1; i <= 10; i++)
	{
		for (j = 1; j <= 10; j++)
		{
			scanf("%d", &arr[i][j]); //0,1,2 입력
		}
	}
	i = j = 2;
	while (1)
	{
		if (arr[i][j] == 2) //먹이를 먹었을때
		{
			arr[i][j] = 9;
			break;
		}
		arr[i][j] = 9; //경로에 9 저장
		if (arr[i][j + 1] == 0 || arr[i][j + 1] == 2) //오른쪽, 갈 수 있는 경로 or 먹이가 있는 곳
		{
			j++;
		}
		else if (arr[i][j + 1] == 1) //오른쪽, 막힘
		{
			if (arr[i + 1][j] == 0 || arr[i + 1][j] == 2) //위쪽, 갈 수 있는 경로 or 먹이가 있는 곳
			{
				i++;
			}
			else
			{
				break;
			}
		}
	}
	for (i = 1; i <= 10; i++) //출력
	{
		for (j = 1; j <= 10; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int arr[101][101] = { 0 };
	int h, w, n, l, d, x, y, i, j;
	scanf("%d %d", &h, &w);
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		scanf("%d %d %d %d", &l, &d, &x, &y);
		if (l == 1)
		{
			if (arr[x][y] == 0)
			{
				arr[x][y] = 1;
			}
		}
		if (l != 1)
		{
			if (d == 0)
			{
				for (j = 1; j <= l; j++)
				{
					arr[x][y + j - 1] = 1;
				}
			}
			else if (d == 1)
			{
				for (j = 1; j <= l; j++)
				{
					arr[x + j - 1][y] = 1;
				}
			}
		}
	}
	for (i = 1; i <= h; i++)
	{
		for (j = 1; j <= w; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int arr[101][101] = { 0 };
	int n, m, i, j, a = 1;
	scanf("%d %d", &n, &m);
	for (i = 1; i <= n * m; i++)
	{

	}
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= m; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int arr[10][10] = { 0 };
	int i, j;
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	i = j = 2;
	while (1)
	{
		if (arr[i][j] == 2)
		{
			arr[i][j] = 9;
			break;
		}
		arr[i][j] = 9;
		if (arr[i][j + 1] == 0 || arr[i][j + 1] == 2)
		{
			j++;
		}
		else if (arr[i][j + 1] == 1)
		{
			if (arr[i + 1][j] == 0 || arr[i + 1][j] == 2)
			{
				i++;
			}
			else
			{
				break;
			}
		}
	}
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
