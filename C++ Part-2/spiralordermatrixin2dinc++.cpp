#include<bits/stdc++.h>
using namespace std;
signed main()
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
	
	//spiral order
	int row_st =0 ;
	int row_en =n-1;
	int col_st =0;
	int col_en =m-1;
	while(row_st<=row_en && col_st<=col_en)
	{
		//for row start
		for(int col = col_st;col<=col_en;col++)
		{
			cout<<a[row_st][col]<<" ";
		}
		cout<<endl;
		row_st++;
		//for col end
		for(int row = row_st;row<=row_en;row++)
		{
			cout<<a[row][col_en]<<" ";
	}
		cout<<endl;
		col_en--;
		//for row end
		for(int col = col_en;col>=col_st;col--)
		{
			cout<<a[row_en][col]<<" ";
	}
		cout<<endl;
		row_en--;
		// for col start
		for(int row = row_en;row>=row_st;row--)
		{
			cout<<a[row][col_st]<<" ";
		}
		cout<<endl;
		col_st++;
	}
	return 0;
}
