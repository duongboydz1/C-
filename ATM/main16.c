#include <stdio.h>

int tiencuaban = 10000000;
int phigiaodich = 5000;

int main()
{
	int exit = 1;
	while (exit != 0) {
		printf("welcome to TD bank");
		char name[50];
		int pass;
		int lua_chon;
		int isLogin;
	
		printf("\nNhap ten nguoi dung: ");
		gets(name);

		printf("\nNhap mat khau cua ban: ");
		scanf("%d", &pass);
	
		isLogin = login(name, pass);	
		if(isLogin == 1)
		{		
			printf("\nThong tin cua ban hop le:\n1.Rut tien, \n2.Chuyen tien, \n3.Kiem tra TK\n");
			scanf("%d", &lua_chon);
			switch(lua_chon) 
			{
			case 1:
				rut_tien();
				printf("Ban co muon thuc hien giao dich khac nhan 1 (Co) || 0 (Khong): ");
				scanf("%d", &lua_chon);
				switch (lua_chon) 
				{
					case 1:
						exit = 1;
						break;
					case 0:
						exit = 0;
						break;
				}
				break;
			case 2:
				chuyen_tien();
				printf("\nBan co muon thuc hien giao dich khac nhan 1 (Co) || 0 (Khong): ");
				scanf("%d", &lua_chon);
				switch (lua_chon) 
				{
					case 1:
						exit = 1;
						break;
					case 0:
						exit = 0;
						break;
				}
				break;
			case 3:
				kiem_tra_Tk();
				printf("\nBan co muon thuc hien giao dich khac nhan 1 (Co) || 0 (Khong): ");
				scanf("%d", &lua_chon);
				switch (lua_chon) {
					case 1:
						exit = 1;
						break;
					case 0:
						exit = 0;
					break;
				}
				break;
			}
		}
		else
		{
			printf("TK hoac MK khong dung");		
		}
	}
	return 0;	
}
	
int login(int name, int pass)
{
	if(name == "tungduong" || pass == 12345)
	{
	return 1;
	}
	return 0;
}

rut_tien()
{
	printf("rut_tien");
	int sotienrut;
	printf("\nSo tien can rut:");
	scanf("%d", &sotienrut);
	
	printf("%d", sotienrut);
	if (sotienrut <= tiencuaban + phigiaodich, sotienrut%50, sotienrut<=3000000) 
	{
		tiencuaban = tiencuaban - sotienrut - phigiaodich;
		printf("TK cua ban con: %d", tiencuaban);	
	} 
	else 
	{
		printf("TK cua ban khong du");
		rut_tien();
	}
}

chuyen_tien()
{
	printf("chuyen_tien");
	
	int sotienchuyen;
	printf("\nSo tien can chuyen:");
	scanf("%d", &sotienchuyen);
	printf("%d", sotienchuyen);
	
	if(sotienchuyen <= tiencuaban)
	{
		tiencuaban = tiencuaban - sotienchuyen;
		printf("TK cua ban con: %d", tiencuaban);		
	} 
	else 
	{
		printf("TK cua ban khong du");
		chuyen_tien();
	}
}

kiem_tra_Tk()
{
	printf("\nTien cua ban %d", tiencuaban);
}




	
