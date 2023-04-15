#include<iostream>
int setBit(int n,int i,int value)
{
	int mask = ~(1<<i);
	n = n & mask;
	return(n | value<<i);
}
using namespace std;
int main()
{
	cout<<setBit(5,1,1)<<endl;
}

