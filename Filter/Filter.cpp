#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int  filter(int *p,int temp)
{
	int mod;
	mod = temp % 10;
	if (mod == 0) { *p +=1; }
	else if (mod == 1) { *(p + 1) += 1; }
	else if (mod == 2) { *(p + 2) += 1; }
	else if (mod == 3) { *(p + 3) += 1; }
	else if (mod == 4) { *(p + 4) += 1; }
	else if (mod == 5) { *(p + 5) += 1; }
	else if (mod == 6) { *(p + 6) += 1; }
	else if (mod == 7) { *(p + 7) += 1; }
	else if (mod == 8) { *(p + 8) += 1; }
	else if (mod == 9) { *(p + 9) += 1; }
	temp /= 10;
	return temp;
}

int main()
{
	int n1, n2, i, a[10], mod, temp;
	
	for (i = 0;i < 10;i++)
	{
		a[i] = 0;
	}
	int* p = a;
jumper:

	printf("\nFirst number > Second number   AND   First number must > 0!!!\n");
	printf("Eneter n1 :");
	scanf("%d", &n1);
	printf("Eneter n2 :");
	scanf("%d", &n2);
	if (n2 < n1 || n1 < 0)
	{
		goto jumper;
	}
	for (int j = n1;j <= n2;j++)
	{
		temp = j;
		while (temp != 0) {
			temp = filter(p, temp);
		}		
	}
	for (i = 0;i < 10;i++)

	printf(" There are have wirte number %d .... %d times\n", i , a[i]);
	return 0;
}