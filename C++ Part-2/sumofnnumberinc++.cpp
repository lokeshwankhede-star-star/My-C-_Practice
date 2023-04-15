#include<bits/stdc++.h> //This file includes all standard library. Sometimes in some coding contests, when we have to save time while solving,
using namespace std;
int sum(int n)
{
	int add = 0;
	for(int i=1;i<=n;i++)
	{
		add = add +i;
	}
	return add;
}
//int32_t main() it's an alias for whatever integer type your particular system has that is exactly 32 bits.
int main()
{
 int n;
 cin>>n;
 cout<<sum(n)<<endl;
 return 0;	
}
