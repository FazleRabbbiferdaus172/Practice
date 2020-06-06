#include<iostream>
using namespace std;


int winner(int n,int k)
{
    if(n==1)
    {
        return 1;
    }
    else
    {
        return (winner(n-1,k)+(k-1))%n+1;
    }

}

int main()
{
    int t,l;
    int n,k;
    cin>>t;

    for(l=0;l<t;l++)
    {
        cin>>n>>k;
        cout<<winner(n,k)<<endl;
    }


    return 0;
}
