#include <stdio.h>

void printnhiphan(int x)
{
	if(x==0)
		return;
	else{
		int r = x%2;
		printnhiphan(x/2);
		printf("%d", r);		
	}
}

int main()
{
	int n;
	do{
		printf("Nhap n= ");
		scanf("%d", &n);
	}while(n<0);
	
	printnhiphan(n);
}
