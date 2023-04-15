#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
//	string s1="ABCDEFGHI";
	string s1="abcdefgh";
	for(int i=0;i<s1.size();i++)
	{
	//	if(s1[i]>='A'&&s1[i]<='Z')
		if(s1[i]>='a'&&s1[i]<='z')
		{
//			s1[i]+=32;
			s1[i]-=32;
		}
	}
	cout<<s1<<endl;
}
