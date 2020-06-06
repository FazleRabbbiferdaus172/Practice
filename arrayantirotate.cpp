#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int t,i;
	scanf("%d",&t);
	for(i=1;i<=t;i++)
	{
		int size,d,i,c;
		scanf("%d %d",&size,&d);
		int *a;
		a=(int*)malloc(size*sizeof(int));


		if(d>size)
        {
            d=d%size;
        }

		for(i=0;i<size;i++)
        {
            scanf("%d",&a[i]);
        }

		for(i=0;i<size;i++)
        {
            c=a[i];
            //a[i]=a[(i+d)%size];
            printf("%d ",a[((size+i)-d)%size]);
        }


            printf("\n");



	}

	getch();
}

