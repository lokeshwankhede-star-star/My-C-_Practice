#include<iostream>
using namespace std;
int uniqueno(int arr[],int n)
{
	int xorsum=0;
	for(int i=0;i<n;i++)
	{
		xorsum = xorsum ^ arr[i];
		cout<<xorsum<<endl;
}
cout<<xorsum<<" ";
return xorsum;
}
int main()
{
	int arr[7]={1,2,3,2,8,1,3};
	cout<<uniqueno(arr,7);
	return 0;
}
