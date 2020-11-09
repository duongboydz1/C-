#include <stdio.h>
int main()
{
	float a, b, s, c;
	printf("\nNhap chieu dai canh a:");
	scanf("%f", &a);
	
	printf("\nNhap chieu rong canh b:");
	scanf("%f", &b);
	
		if("a>0 && b>0")
	{
		s=a*b;
		c=(a+b)*2;
		printf("Chu vi la: %.f\n",c);
        printf("Dien tich la: %.f\n",s);
    }
	else
		{
        	printf("Hinh khong hop le");
        }
}
