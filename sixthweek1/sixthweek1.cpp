#include<stdio.h>
void square(int n)
{
	int x,y;
	for (x = 1; x <= n; x++)
	{
		for (y = 1; y <= n; y++)
		{
			printf("*");
		}
		printf("\n");
	}
}
int main()
{
	int a;
	printf("Enter the number : ");
	scanf_s("%d", &a);
	square(a);


	return 0;
}