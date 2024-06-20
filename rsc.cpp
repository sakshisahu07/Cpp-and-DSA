#include<iostream>
using namespace std;

int main(){
	char choice;
	cout<<"C-->circle,R--->rectangle,S--->square\n:";
	cout<<"enter your choice:";
	cin>>choice;
	
	if(choice=='C'){
		double r;
		cout<<"enter radius:";
		cin>>r;
		cout<<"area:"<<3.14*r*r;
		
	}
	else if(choice=='R'){
		double l,b;
		cout<<"enter length and breadth:";
		cin>>l>>b;;
		cout<<"area:"<<l*b;
		}
	else if(choice=='S'){
		double side;
		cout<<"enter sides:";
		cin>>side;;
		cout<<"area:"<<side*side;
		}
		
		
		
		
	}

