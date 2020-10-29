#include <stdio.h>
int main()
{
	int num1, num2, i;
	printf("\nCac so le trong khoang:");
	scanf("%d %d", &num1, &num2);
	for(i>=num1; i<=num2; i++)
	{
		if(i>=num1 && i<=num2)
		printf("\nCac so le trong khoang la:%d", i);
	}
	
}
