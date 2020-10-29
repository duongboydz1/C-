#include <stdio.h>
int main()
{
	int A, B, loaikhac;
	
	printf("\nTro cap cua nhan vien A:300");
	printf("\nTro cap cua nhan vien B:250");
	printf("\nTro cap cua nhan vien khac:100");

	printf("\nNhap luong nhan vien A:");
	scanf("%d", &A);
	printf("\nLuong nhan vien A: %d", A+300);
	
	printf("\nNhap luong nhan vien B:");
	scanf("%d", &B);
	printf("\nLuong nhan vien B:%d", B+250);
	
	printf("\nNhap luong nhan vien loaikhac:");
	scanf("%d", &loaikhac);
	printf("\nluong nhan vien loai khac:%d", loaikhac+100);
}
