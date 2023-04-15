#include<bits/stdc++.h>
using namespace std;
int firstoccu(int arr[],int n,int a,int i)
{
	if(i==n)
	{
		return -1;
	}
	if(arr[i]==a)
	{
		return i;
	}
	return firstoccu(arr,n,a,i+1);
	
}
int lastoccu(int arr[],int n,int a,int i)
{
	if(i==n)
	{
		return -1;
	}
	int restarray = lastoccu(arr,n,a,i+1);
	if(restarray!=-1)
	{
		return restarray;
	}
	if(arr[i]==a)
	{
		return i;
	}
	return -1;
	
} 
int main()
{
	int n,a,i;
	int arr[] ={4,2,1,2,5,2,7};
	cout<<firstoccu(arr,7,2,0)<<endl;
	cout<<lastoccu(arr,7,2,0)<<endl;
return 0;
}

