#include<iostream>
int ispower2(int n)
{
	return(n && !(n & n-1));
}
using namespace std;
int main()
{
	cout<<ispower2(0)<<endl;
}
