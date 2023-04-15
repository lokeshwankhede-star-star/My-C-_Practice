#include<iostream>
using namespace std;
int replacepi(string s)
{
	if(s.length()==0)
	{
		return 0;
	}
	if(s[0]=='p' && s[1]=='i')
	{
		cout<<"3.14";
		replacepi(s.substr(2));
	}
	
	else
	{
		cout<<s[0];
		replacepi(s.substr(1));
	}
}
int main()
{
	replacepi("pipxxppiixipi");
	return 0;
}
