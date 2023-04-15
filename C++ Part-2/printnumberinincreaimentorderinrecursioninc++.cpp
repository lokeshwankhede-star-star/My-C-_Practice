#include<bits/stdc++.h>
using namespace std;
int inc(int n)
{
	if(n==1)
	{
		cout<<"1"<<endl;
		return 0;
	}
	inc(n-1);
	cout<<n<<endl;
	
}
int main()
{
int n;
cin>>n;
inc(n);
return 0;
}

