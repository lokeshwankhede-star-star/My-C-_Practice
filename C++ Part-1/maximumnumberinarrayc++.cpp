#include<bits/stdc++.h>

using namespace std;
int main()
{
	int n;
	cin>>n;
	int array[n];
	for(int i=0;i<=n;i++)
	{
		cin>>array[i];
	}
	int maxno =INT_MIN;
	int minno =INT_MAX;
	for(int i=0;i<=n;i++)
	{
/*		if(array[i]>maxno)
		{
			maxno=array[i];
		}
		if(array[i]<minno)
		{
			minno=array[i];
		}
	*/
	maxno = max(maxno,array[i]);
	minno = min(minno,array[i]);
	}
	cout<<maxno<<" "<<minno<<" ";
	return 0;
}
