#include<stdio.h>  
#include<conio.h>  

int main()  
{  
 int num1=0,num2=1,num3,i,sum;  
  
 printf("Nhap so phan tu trong day Fibonacci: ");  
 scanf("%d",&sum);  
 printf("\n%d %d",num1,num2);  
  
 for(i=2;i<sum;++i)   
 {  
  num3=num1+num2;  
  printf(" %d",num3);  
  num1=num2;  
  num2=num3;  
 }  
}
