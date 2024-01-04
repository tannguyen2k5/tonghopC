#include <stdio.h>
int main()
{
	int a[100];
	int n;
	do{
		printf("Nhap vao so luong phan tu cua mang (0<n<=100)= ");
		scanf("%d", &n);		
	}while(n<0||n>100);
	
	//Nhap du lieu cho mang
	for(int i=0; i<n; i++)
	{
		printf("\na[%d]", i);
		scanf("%d", &a[i]);
	}
	
	//Xuat du lieu cua mang
	printf("\nCac mang vua nhap la: ");
	for(int i=0; i<n; i++)
	{
		printf("\n%d", a[i]);		
	}
}
