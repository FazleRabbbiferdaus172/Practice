#include<stdio.h>


int main()
{
	long int t,l;
	long int a1[100000],a2[100000],n1,n2,max,min;
	scanf("%ld",&t);
	for(l=0;l<t;l++){
	   long int i;
	   max=-100000;
	   min=100000;
	   scanf("%ld",&n1);
	   for(i=0;i<n1;i++)
       {
           scanf("%ld",&a1[i]);
       }
       scanf("%ld",&n2);
       for(i=0;i<n2;i++)
       {
           scanf("%ld",&a2[i]);
       }

       for(i=0;i<n1;i++)
       {
           if(a1[i]>max)
           {
               max=a1[i];
           }
       }


       for(i=0;i<n2;i++)
       {
           if(a2[i]<min)
           {
               min=a2[i];
           }
       }



       long int product=max*min;
       printf("%ld \n",product);


	}
	return 0;
}
