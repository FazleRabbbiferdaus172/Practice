#include<stdio.h>
#include<math.h>

int main()
{
	int t,l,flag;
	long long int n,i;

	scanf("%d",&t);
	for(l=0;l<t;l++){
            flag =0;
            scanf("%lld",&n);
            for(i=1;i<n/2;i++)
            {
                if((i*(i+1))==2*n)
                {
                    flag=1;
                    break;
                }
            }
            if(flag==1)
            {
                printf("1");
            }
            else
            {
                printf("0");
            }
            printf("\n");


       }
	return 0;
}

