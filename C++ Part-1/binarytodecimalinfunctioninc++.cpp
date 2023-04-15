#include<bits/stdc++.h>
using namespace std;
//int btd(int n)
int otd(int n)
{
	int ans=0;
	int x=1;
	while(n>0)
	{
	 	int y=n%10;
		ans+=x*y;
//		x *= 2;
		x *= 8;
		n/=10;	
	}
	return ans;
}
int main()
{
	int n;
	cin>>n;
//	cout<<btd(n)<<endl;
//	cout<<otd(n)<<endl;
    cout<<htd(n)<<endl;
	return 0;
}
