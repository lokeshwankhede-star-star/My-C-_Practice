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
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(a[i][j]==key)
			{
				cout<<i<<" "<<j<<" "<<endl;
				cout<<"element found";
				return true;
			}
			else
			{
				cout<<"element not found";
				return false;
			}
		}
	}
	return 0;
}
