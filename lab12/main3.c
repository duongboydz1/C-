#include <stdio.h>
main()
{
	incre();
	incre();
	incre();
}
incre()
{
	char var = 65; /* var is automatic variale */
	printf("\nThe character stored in var is %c", var++);
}
