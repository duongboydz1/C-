#include <stdio.h>
int main()
{
	int a,b;
	
	printf("\nNhap so a:");
	scanf("%d", &a);
	
	printf("\nNhap so b:");
	scanf("%d", &b);
	
	printf("Hieu so a va b la:%d", a - b);
	
	if(a-b==a || a-b==b)
	printf("\nHieu bang gia tri< gia tri da nhap vao>");
	else
	printf("\nhieu ko bang bat ki gia tri nao da dc nhap");
	
}
