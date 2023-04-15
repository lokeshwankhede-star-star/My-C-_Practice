#include<bits/stdc++.h>
using namespace std;
int setbit(int n,int pos)
{
	return(n | 1<<pos);  
}
bool getbit(int n,int pos)
{
	return((n & (1<<pos))!=0);
}
int unique(int arr[],int n)
{
	int result;
	for(int i=0;i<64;i++) //int size is 64 so we take here 64
	{
		int sum=0;
		for(int j=0;j<n;j++)
		{
			if(getbit(arr[j],i))
			{
				sum++;
			}
		}
		if(sum%3!=0)
		{
			result =setbit(result,i);
		}
	}
	return result;
}
int main()
{
 int arr[] ={1,2,3,4,5,4,3,2,1,1,2,3,4};
 cout<<unique(arr,13);
 return 0;
}

