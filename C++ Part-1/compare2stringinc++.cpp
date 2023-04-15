#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s1="abc";
	//string s2="xyz";
	//cout<<s2.compare(s1)<<endl;
	string s2 ="abc";
	if(s1.compare(s2)==0)
	{
		cout<<"string are equal"<<" ";
	}
	cout<<s2.compare(s1)<<endl;
	return 0;
}
