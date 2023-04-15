#include<iostream>
using namespace std;
void primefactor(int n)
{
	int spf[100]={0};
	for(int i=2;i<=n;i++)
	{
		spf[i]=i;
	 }
//hummne abhi sabhi ko unko hi spf de diya hai like 2 ka spf 2, 3 ka spf 3,......50 ka spf 50.
// abb humm check karge ki kiska spf intialze nahi hai
	for(int i=2;i<=n;i++)
	{
	if(spf[i]==i)
	{
		for(int j=i*i;j<=n;j+=i)
		{
			if(spf[j]==j) // yaha per humm or ek baar check karenge ki spf mark hai ya nahi
			{
				spf[j]=i;
			}
		}
	}
}
while(n!=1)
		{
			cout<<spf[n]<<" ";
			n=n/spf[n];
		}
}
int main()
{
	int n;
	cin>>n;
	primefactor(n);
	return 0;
}
