#include <iostream>
using namespace std;

int findl(int arr[],int l,int r,int x)
{
    int k=-1;
    while(l<=r)
    {
        int m=(l+r)/2;
        if(arr[m]==x)
        {
            k=m;
            r=m-1;
        }
        else if(arr[m]>x)
        {
            r=m-1;
        }
        else
        {
            l=m+1;
        }
    }
    return k;
}
int findh(int arr[],int l,int r,int x)
{
    int k=-1;
    while(l<=r)
    {
        int m=(l+r)/2;
        if(arr[m]==x)
        {
            k=m;
            l=m+1;
        }
        else if(arr[m]>x)
        {
            r=m-1;
        }
        else
        {
            l=m+1;
        }
    }
    return k;
}

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int x;
	    cin>>x;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    int l=findl(arr,0,n-1,x);
	    int h=findh(arr,0,n-1,x);
	    if(l==-1&&h==-1)
	    {
	        cout<<l<<endl;
	    }
	    else
	    {
	        cout<<l<<" "<<h<<endl;
	    }
	}
	return 0;
}
