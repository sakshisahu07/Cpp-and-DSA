#include<iostream>
using namespace std;

int main(){
	int num;
	cout<<"enter the number:";
	cin>>num;
	//conditions to check if the number is positive or negetive 
	if(num>0)
		cout<<"the number is positive:";
	else if(num<0)
		cout<<"the num is negetive:";
	else
		cout<<"zero";
		return 0;
}
