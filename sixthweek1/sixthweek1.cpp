#include<stdio.h>
#include<math.h>
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
	int area = pow(a, 2);
	printf("The area is %d", area);


	return 0;
}
