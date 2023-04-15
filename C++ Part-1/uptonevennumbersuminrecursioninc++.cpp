#include<iostream>
using namespace std;
int even(int n)
{
	if(n<=1)
	{
		return 0;
	}
	return(n+even(n-2));
}
int main()
{
	int n;
	cin>>n;
	cout<<even(n)<<endl;
}
