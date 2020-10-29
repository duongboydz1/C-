#include <stdio.h>
int main()
{
	int num1, num2, num3;
	printf("\nIn ra day so:");
	printf("\n");
	num3 = 0;
	for(num1=1; num1<10; num1++)
	{
		num3 = num3 * 10 + num1;
		printf("%d\n", num3);
	}
}
