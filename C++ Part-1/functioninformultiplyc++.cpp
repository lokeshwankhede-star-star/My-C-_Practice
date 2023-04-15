#include<iostream>
using namespace std;
void print(int num)
{
	cout<<num<<endl;
	return;
}
int mul(int num1,int num2)
{
	print(num1);
	print(num2);
	int multiply = num1 * num2;
	return multiply;
}
int main()
{
	int a=5;
	int b =10;
	cout<<mul(a,b)<<endl;
	return 0;
	}
