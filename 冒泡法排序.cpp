#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,c,a[2002],t;
	cin>>n>>m;
	t=n+m;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int j=n;j<t;j++)
	{
		cin>>a[j];
	}
	for(int i=0;i<t-1;i++)
	{
		for(int j=0;j<(t-i-1);j++)
		{
			if(a[j]>a[j+1])
			{
				c=a[j];
				a[j]=a[j+1];
				a[j+1]=c;
			}
		}
	}
	for(int q=0;q<t;q++)
	{
		cout<<a[q]<<" ";
	}
	return 0;
}
