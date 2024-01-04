#include <stdio.h>

void swap(int &a, int &b)
{
	int tam = a;
	a = b;
	b = tam;
}
void sapxeptang(int x[], int n)
{
	for(int i=0; i<n-1; i++)
	{
		int vitrinhonhat = i;
		for(int j=i+1; j<n; j++)
		{
			if(x[j]<x[vitrinhonhat])
				vitrinhonhat = j;
		}
		swap(x[i], x[vitrinhonhat]);
	}
}

void sapxepgiam(int x[], int n)
{
	for(int i=0; i<n-1; i++)
	{
		int vitrilonnhat = i;
		for(int j=i+1; j<n; j++)
		{
			if(x[j]>x[vitrilonnhat])
				vitrilonnhat = j;
		}
		swap(x[i], x[vitrilonnhat]);
	}
}
void printmang(int x[], int n)
{
	for(int i=0; i<n; i++)
	{
		printf("\t%d", x[i]);
	}
}
int main()
{
	int a[100], n;
	do{
		printf("Nhap so luong phan tu cua mang (0<n<=100): ");
		scanf("%d", &n);
	}while(n<1 || n>100);
	
	for(int i=0; i<n; i++)
	{
		printf("a[%d]= ", i);
		scanf("%d", &a[i]);
	}
	
	printf("\nMang tang dan: ");
	sapxeptang(a, n);
	printmang(a, n);
	
	printf("\nMang giam dan: ");
	sapxepgiam(a, n);
	printmang(a, n);
}
