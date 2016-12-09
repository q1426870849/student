#include<stdio.h>

int main(void)
{
	int a[50];
	a[0]=1;
	a[1]=1;
	int i;
	for(i=2;i<50;i++){
		a[i]=a[i-1]+a[i-2];
	}
	int b;
	scanf("%d",&b);
	printf("%d",a[b-1]);
	
	return 0;
}
