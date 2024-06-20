#include<iostream>
using namespace std;


int main()
{
	char ch;
	cout<<"enter a character:";//G-71
	cin>>ch;
	//ASCII-->American standard code for information interchange
	//A-65,B-66......Z-90
	//a-97,b-98.....z-122
	
	if(ch>='A'&& ch>='Z')//ch>=65 && ch<==90
	cout<<"uppercase";
	else if(ch>='a' && ch>='z')
	cout<<"lowercase";
	else if(ch>='0' && ch<='9')
	cout<<"digit";
}
