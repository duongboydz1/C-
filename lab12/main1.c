#include <stdio.h>
main()
{
	int i;
	for(i=1; i<=10; i++)
	printf("\nsquare of %d is %d ", square(i));
}
squarer(int x)
/* int x */
{
	int j;
	j= x*x;
	return (j);
}
