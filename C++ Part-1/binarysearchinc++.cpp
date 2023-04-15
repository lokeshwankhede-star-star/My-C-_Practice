#include<bits/stdc++.h>
using namespace std;
int binarysearch(int array[],int n,int key)
{
	int start = 0;
	int end = n;
	while(start<=end)
	{
	int mid = (start+end)/2;
	
	if(array[mid]==key)
	{
		return mid;
	}
	else if(array[mid]>key)
	{
		end =mid-1;
	}
	else
	{
		start = mid+1;
	}
	
	}
	return -1;
}
int main()
{
	int n;
	cin>>n;
	int array[n];
	for(int i=0;i<=n;i++)
	{
		cin>>array[i];
	}
	int key;
	cin>>key;
	cout<<binarysearch(array,n,key)<<endl;
	return 0;
}
