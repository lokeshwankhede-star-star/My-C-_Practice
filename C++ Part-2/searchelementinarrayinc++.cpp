#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	int a[n][m];
	for(int i=0;i<n;i++)
	{ 
		for(int j=0;j<m;j++)
		{
			cin>>a[i][j];
		}
	}
	int key;
	cin>>key;
    bool flag = false;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(a[i][j]==key)
			{
				cout<<i<<" "<<j<<" ";
				flag = true;
			}
		}
	}
	if(flag)
	{
		cout<<"element is found";
	}
	else
	{
		cout<<"element not found";
	}
	return 0;
}
