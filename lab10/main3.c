#include <stdio.h>
void main()
{
	int a, b, max;
	printf("Nhap so de hien bang cuu chuong cua so day:\n", a);
	scanf("%d", &a);
	for(b=1; b<=10; b++)
	{
		for(a=1; a<=10;a++)
		printf("%d * %d = %d\n",a, b, a*b);
	}
}

