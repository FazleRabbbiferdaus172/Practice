#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int t,i;
	scanf("%d",&t);
	for(i=1;i<=t;i++)
	{
		int n;
		scanf("%d",&n);
		int a[n][n],i,j;
		for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }

         for(i=0;i<n;i++)
        {
            for(j=n-1;j>=0;j--)
            {
                printf("%d ",a[j][i]);
            }
        }
        printf("\n");




	}

	getch();
}
