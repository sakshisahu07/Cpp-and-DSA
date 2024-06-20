#include<iostream>
using namespace std;

int main()
{
	int age;
	char choice;
	cout<<"enter your age:";
	cin>>age;
	cout<<"r u indian type 'y' or 'n'";
	cin>>choice;
	
	(age>=18 && choice=='y') ? cout<<"u r eligible": cout<<"u r not eligible";
	
}
