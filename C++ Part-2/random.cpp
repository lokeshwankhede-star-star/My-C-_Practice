#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	int a[n][m];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}
	int row_st =0;
	int row_end =m-1;
	int col_st =0;
	int col_end =n-1;
	for(int col = col_st;col<=col_end;col++)
	{
	  cout<<a[row_st][col]<<" ";
	}
	cout<<endl;
	row_st++;
	
	for(int row = row_st;row<=row_end;row++)
	{
	  cout<<a[row][col_end]<<" ";
	}
	cout<<endl;
	col_end--;
	
	for(int col = col_end;col>=col_st;col--)
	{
	  cout<<a[row_end][col]<<" ";
	}
	cout<<endl;
	row_end--;
	
	for(int row = row_end;row>=row_st;row--)
	{
	  cout<<a[row][col_st]<<" ";
	}
	cout<<endl;
	col_st++;
	return 0;
}

