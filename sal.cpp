#include<iostream>
using namespace std;

int main(){
	double salary,bonus;
	int year;
	cout<<"enter your salary";
	cin>>salary;
	cout<<"enter your service";
	cin>>year;
	if(year>5){
		cout<<"u r eligible for bonus\n";
		bonus=salary*(5.0/100);
		cout<<"u got bonus of rupees:"<<bonus<<endl;
		cout<<"u got salary of rupees:"<<salary+bonus;
	}
	else{
		cout<<"u r eligible for bonus\n";
		cout<<"u got salary of rupees:"<<salary;
	}
	
}
