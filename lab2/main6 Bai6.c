#include <stdio.h>
void main()
{
	int a;
	float d;
	char ch, name [40];
	printf("please enter the data\n");
	scantf("%d, %f, %c, %f", &a, &d, &ch, name);
	printf("\nThe values accepted are: %d, %f, %c, %s", a, d, ch, name);
}
