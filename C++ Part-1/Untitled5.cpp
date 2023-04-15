#include<iostream>
using namespace std;
int divisible(int n,int a,int b)
	{
		int c1 = n/a;
		int c2 = n/b;
		int c3 = n/(a*b);
		
		return c1+c2-c3;
	}
int main()
{
	int n,a,b;
	cout<<"number that you want to check"<<endl;
	cin>>n;
	cout<<"provide 2 divisible by number which you want to check"<<endl;
	cin>>a>>b;
}
