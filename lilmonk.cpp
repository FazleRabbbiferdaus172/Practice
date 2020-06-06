#include<stdio.h>
#include<string.h>
int main()
{
    char s[100000];
    gets(s);

    long long int n=strlen(s),i,count=0,max=0;

    for(i=0;i<n;i++)
    {
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
        {
            count++;
            if(count>max)
            {
                max=count;
            }
        }
        else
        {
            count=0;
            if(count>max)
            {
                max=count;
            }
        }
    }
    printf("%d",max);



    return 0;
}
