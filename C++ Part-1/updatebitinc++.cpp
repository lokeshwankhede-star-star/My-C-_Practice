#include<bits/stdc++.h>
using namespace std;
int updateBit(int n,int pos,int value)
{
	int mask = ~(1<<pos); //clear bit
	n = n & mask;    //clear bit
	return(n | value<<pos);
}
int main()
{
	cout<<updateBit(5,1,1)<<endl;
	return 0;
}
