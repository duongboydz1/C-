#include <stdio.h>
int say();
void break();
void love();
int thuc_te(int age, int high, int weight);
int tieu_chuan(int age, int high, int weight);

int thuc_te(int age, int high, int weight);
{
	printf("\nTuoi:");
	scanf("%d", &age);
	
	printf("\nChieu cao:");
	scanf("%d", &high);
	
	printf("\nCan nang:");
	scanf("%d", &weight);
	
	return tieu_chuan;
}
int tieu_chuan(int age, int high, int weight)
{

	if(age>=18, high>155, weight>50, weight<60)
	{
		printf("Chuc mung em da trung tuyen");
		else
		{
		printf("Em rat tot nhung anh rat tiec");
		}
	}
}
int say()
{
	char rep;
	printf("\nDo you love me?");
	printf("\nAnser the question:(Y/N)");
	scanf("%c", &rep);
	if(rep=='y')
	{
		love();
	}
	else(rep=='N')
	{
		break;
	}
}
void break()
{
	printf("\nDad does not love to return sandals");
}
void love()
{
	printf("\nThank you for agreeing. I promise to love you to the best");
}

