#include <iostream>
using namespace std;

int main() {
	//code
	int l,t,n;

	cin>>t;
	for(l=0;l<t;l++)
	{
	    cin>>n;
	    int a[n],i,leader;
	    for(i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    leader=a[n-1];
	    for(i=n-2;i>=0;i--)
	    {
	        if(leader<=a[i])
	        {
	            leader=a[i];

	        }
	        else
	        {
	            a[i]=-1;
	        }
	    }
	    for(i=0;i<n;i++)
	    {
	        if(a[i]!=-1)
	        cout<<a[i]<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
