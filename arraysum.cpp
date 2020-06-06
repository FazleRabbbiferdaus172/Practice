
#include <stdio.h>

int main(){

    long long int num,i;
	scanf("%lld",&num);
	long long int a[num],b[num],c[num];

	for(i=0;i<num;i++)
	{
	  scanf("%lld",&a[i]);
	}

	for(i=0;i<num;i++)
	{
	  scanf("%lld",&b[i]);
	}

	for(i=0;i<num;i++)
	{
	  c[i]=a[i]+b[i];
	}

	for(i=0;i<num;i++)
	{
	  printf("%lld ",c[i]);
	}
	printf("\n");

	return 0;}
