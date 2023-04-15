#include<iostream>
using namespace std;
void fibo(int n)
{
	int a =0;
	int b =1;
	int next;
	for(int i=1;i<=n;i++)
	{
		cout<<a<<endl;
		next = a + b;
		a=b;
		b=next;
	}
	return;
}
int main()
{
	int n;
	cin>>n;
	fibo(n);
	return 0;
}
