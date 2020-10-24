#include <stdio.h>
void main()
{
	int x, y;
	x=y=0;
    clrscr//()
	printf("Enter choice (1-3):");
	sanf("%d", &x);
	if(x==1)
	{
		printf("\nEnter value for y (1-5):");
		scanf("%d", &y);
		if(y<=5)
		printf("\nEnter value for y is:%d", y);
		else
		printf("\nEnter value for y exceeds 5");
	}
		else
		printf ("\nChoice entered was not 1");
}




