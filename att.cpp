#include<iostream>
using namespace std;

int main()
{
	int attendence;
	int classes;
	cout<<"number of classes held";
	cin>>attendence;
	cout<<"number of classes attend";
	cin>>classes;
	(attendence>=75 && classes>=85) ? cout<<"u r allowed to sit in exam" : cout<<"u r not allowed to sit in exam";
}
