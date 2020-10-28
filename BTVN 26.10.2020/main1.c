#include <stdio.h>
int main()
{
	int A, B, C, D;
	int diemcuaban;
	printf("Diem cua ban la:");
	scanf("%d", &diemcuaban);
	if(diemcuaban >= 75)
		{
		printf("\nBan thuoc loai A");
		}
	
	else if(diemcuaban>=60 && diemcuaban<75)
		{
		printf("\nBan thuoc loai B");
		}

	else if(diemcuaban>=45 && diemcuaban<60)
		{
		printf("\nBan thuoc loai C");
		}

	else if(diemcuaban>=35 && diemcuaban<45)
		{
		printf("\nBan thuoc loai D");
		}

	else if(diemcuaban<35)
		{
		printf("\nBan nen o nha thi tot hon");
		}
	return 0;
}
