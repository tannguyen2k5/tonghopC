#include <stdio.h>

float trungbinhcong(int x[], int n)
{
	int tong = 0;
	for(int i=0; i<n; i++)
	{
		tong+=x[i];
	}
	return (float)tong/n;
}

float trungbinhcongsoduong(int x[], int n)
{
	int tong = 0;
	int soluongsoduong;
	for(int i=0; i<n; i++)
	{
		if(x[i]>=0)
		{
			tong+=x[i];
			soluongsoduong++;
		}
	}
	return soluongsoduong>0?(float)tong/soluongsoduong:-1;
}
int main()
{
	int a[100];
	int n;
	do{
		printf("Nhap so luong phan tu (0<n<=100)= ");
		scanf("%d", &n);
	}while(n<1 || n>100);
	
	//Nhap mang 
	for(int i=0; i<n; i++)
	{
		printf("\na[%d]= ", i);
		scanf("%d", &a[i]);
	}
	
	printf("\nTrung binh cong: %.2f", trungbinhcong(a, n));

	float tbcsd = trungbinhcongsoduong(a, n);
	if(tbcsd>0)
	{	
		printf("\nTrung binh cong so duong= %.2f", tbcsd);
	} else {
		printf("\nKo co so duong! ");
	}
}


