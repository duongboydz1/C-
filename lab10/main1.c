#include <stdio.h>
void main()
{
	int age, i;

	char name[20];
	printf("\nten:", name);

	gets(name);

	printf("\nSo tuoi cua ban la:", age);
	scanf("%d", &age);

	for(i=0; i<age; i++)
	{
	printf("ten cua ban: %s\n", name, i+1);
	}
}
