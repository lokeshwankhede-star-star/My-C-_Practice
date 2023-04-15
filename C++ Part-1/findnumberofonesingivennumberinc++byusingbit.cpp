#include<iostream>
int numberofones(int n)
{
	int count = 0;
	while(n!=0)
	{
		n = n&(n-1);
		count++;
	}
	return count;
}
using namespace std;
int main()
{
	cout<<numberofones(2)<<endl;
}
