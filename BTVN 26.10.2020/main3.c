#include <stdio.h>
int main()
{
	int a, b;
	
	printf("\nNhap so a:");
	scanf("%d", &a);
	
	printf("\nNhap so b:");
	scanf("%d", &b);
	
	printf("Tich hai so la: %d", a*b);
	if(a*b>1000)
	printf("\n a nhan b lon hon 1000");
	else
	if(a*b==1000)
	printf("\n a nhan b bang 1000");
	
	return 0;
	
	
}

