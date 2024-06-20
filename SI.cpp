#include<iostream>
using namespace std;

int main()
{
	int simple_interest,principal,rate,time;
	cout<<"enter principal";
	cin>>principal;
	cout<<"enter rate";
	cin>>rate;
	cout<<"enter time";
	cin>>time;
	simple_interest=(principal*rate*time)/100;
	cout<<"simple interest is:="<<simple_interest;
	return 0;
}
