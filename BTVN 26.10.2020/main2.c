#include <stdio.h>
int main()
{
	int a,b;
	
	printf("\nNhap so a: ");
	scanf("%d", &a);
	
	printf("\nNhap so b:");
	scanf("%d", &b);
	
	if(a%b==0)
	{
		printf("a chia het cho b");
		scanf("%d", &a);		
	}
	else
		printf("a ko chia het cho b");
		scanf("%d", &b);
}
