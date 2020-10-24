/* Chuong trinh nay trinh bay cach dung bo tu trong printf() */

#include <stdio.h>
void main()
{
	printf("The number 555 in various forms:\n");
	printf("Without any modifier:\n");
	
	printf("[%d]\n", 555);
	printf("With - modifier:\n");
	
	printf("[%-d]\n",555);
	printf("With digit string 10 as modifier:\n");
	
	printf("[%10d]\n", 555);
	printf("With 0 as modifier:\n");
	
	printf("[%0d]/n", 555);
	printf("With 0 and digit string 10 as modifier:\n");
	
	printf("[%010d]\n", 555);
	printf("with -, 0 and digit string 10 as modifier:\n");
	
	printf("[%-010d]\n", 555);
}


