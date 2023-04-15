#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n+1];
	a[n] =-1;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	if(n==1)
	{
		cout<<"1"<<endl;
		return 0;
	}
	int ans =0 ;
	int mx=-1;
	for(int i=0;i<n;i++)
	{
		if(a[i]>mx && a[i]>a[i+1])
		{
			ans++;
		}
		mx= max(mx,a[i]);
	}
	cout<<ans<<endl;
/*	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<=n;i++)
	{
		
		if(arr[i]>arr[i+1])
		{
			if(arr[i]>arr[i-1])
			{
			cout<<arr[i]<<" ";	
		}
		}
	}*/
	
	return 0;
}
