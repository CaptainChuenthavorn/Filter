#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int n1,n2, i, a[10],mod,temp;
	for (i = 0;i < 10;i++)
	{
		a[i] = 0;
		printf(" %d %d\n", i + 1, a[i]);
	}
jumper:

	printf("n1 > n2 && n1 < 0!!!\n");
	printf("Eneter n1 :");
	scanf("%d", &n1);
	printf("Eneter n2 :");
	scanf("%d", &n2);
	if (n2 < n1 || n1<0)
	{
		goto jumper;
	}
	for (int j = n1;j <= n2;j++)
	{
		i = j;
		temp = i;
		while(temp!=0){
		
		
		mod = temp % 10;
		if (mod == 0) { a[0]++; }
		else if (mod == 0) { a[0]++; }
		else if (mod == 1) { a[1]++; }
		else if (mod == 2) { a[2]++; }
		else if (mod == 3) { a[3]++; }
		else if (mod == 4) { a[4]++; }
		else if (mod == 5) { a[5]++; }
		else if (mod == 6) { a[6]++; }
		else if (mod == 7) { a[7]++; }
		else if (mod == 8) { a[8]++; }
		else if (mod == 9) { a[9]++; }
		temp /= 10;
		}
		i++;
	}
	for(i=0;i<10;i++)

		printf(" %d %d\n", i + 1, a[i]);
	return 0;
}