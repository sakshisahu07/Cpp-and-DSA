#include<iostream>
using namespace std;

int main()
{
	int twelth;
	int graduation;
	cout<<"enter your 12th marks:";
	cin>>twelth;
	cout<<"enter your graduation marks";
	cin>>graduation;
	
	(twelth>=60 && graduation>=70) ? cout<<"u r eligible to sit in exam": cout<<"u r not eligible to sit in exam";
}
