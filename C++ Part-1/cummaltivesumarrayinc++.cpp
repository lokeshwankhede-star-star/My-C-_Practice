#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int currsum[n+1];//6
	currsum[0] = 0;//0
	for(int i=1;i<=n;i++)
	{
		currsum[i] = currsum[i-1] + arr[i-1];
	}
	int maxSum = INT_MIN;//INT_MIN	Minimum value for a variable of type int .	-2147483647 - 1INT_MAX	Maximum value for a variable of type int .	2147483647
	for(int i=1;i<=n;i++)
	{
		int sum =0;
		{
			for(int j =0; j<i;j++)
			{
				sum =currsum[i]-currsum[j];
				maxSum = max(sum,maxSum);
			}
		}
	}
	cout<<maxSum<<" ";
}
