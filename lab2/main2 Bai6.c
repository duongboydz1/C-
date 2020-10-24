/* Chuong trinh nay trinh bay cach dung bo tu trong printf()*/
#include <stdio.h>
void main()
{
	printf("The number 555.55 invarious forms:\n");
	printf("In float form without modifier/;\n");
	printf("[%f]\n", 555.55);
	
	printf("In exponential form without any modifier:\n");
	printf("[%e]\n", 555.55);
	printf("In float form with - modifier:\n");
	
	printf("[%-f]\n",555.55);
	printf("In float form with digit string 10.3 as modifier\n");
	printf("[%10.3f]\n", 555.55);
	
	printf("In float form with 0 as modifier:\n");
	printf("[%0f]\n", 555.55);
	printf("In float form with 0 and digit string 10.3");
	
	printf("As modifier:\n");
	printf("[%010.3f]\n", 555.55);
	printf("In float form with -, 0");
	
	printf("and digit string 10.3 as modifier:\n");
	printf("[%-010.3f]\n", 555.55);
	printf("Inexponential form with 0");
	
	printf(" and digit string 10.3 as modifier:\n");
	printf("[%010.3e]\n", 555.55);
	printf("Inexponential form with -, 0");
	
	printf("and digit string 10.3 as modifier:\n");
	printf("[%-010*3e]\n\n", 555.55);
}


