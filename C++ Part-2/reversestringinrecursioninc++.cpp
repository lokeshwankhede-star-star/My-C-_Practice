#include<iostream>
using namespace std;
void reverse(string s)
{
	if(s.length()==0)
	{
		return;
	}
	string ros = s.substr(1);  // 1 index ki string aa jaagi yaha per
	reverse(ros);
	cout<<s[0]<<endl;
	
}
int main()
{
	reverse("binod");
	return 0;
}
