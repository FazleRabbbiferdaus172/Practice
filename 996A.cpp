#include<iostream>

using namespace std;

int main()
{
    int target;
    int denom[5]={1,5,10,20,100};
    cin>>target;
    int amount[target+1];
    for(int i=0;i<target+1;i++)
    {
        amount[i]= target+1;
    }

    /*for(int i=0;i<target+1;i++)
    {
        cout<<amount[i]<<endl;
    }*/

    amount[0]=0;

    for(int i=1;i<target+1;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(i>=denom[j])
            {
                int x = (amount[i-denom[j]]+1);
                int y = min(x,amount[i]);
                amount[i] = y;
            }
            else
            {
                break;
            }
        }
    }

    if(amount[target]>target)
    {
        cout<<"-1"<<endl;
    }
    else
    {

        cout<<amount[target]<<endl;
    }

}
