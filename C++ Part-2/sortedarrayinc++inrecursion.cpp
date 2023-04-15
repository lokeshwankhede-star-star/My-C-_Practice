#include<iostream>
using namespace std;
bool sort(int arr[],int n)
{
	if(n==1)
	{
		return true;
	}
	int restarray = sort(arr+1,n-1);
	return (arr[0]<arr[1] && restarray);	
}
int main()
{
	int n;
	int arr[]={1,2,3,4,5,8,7};
	cout<<sort(arr,7)<<endl;
}
