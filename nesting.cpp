#include<iostream>
using namespace std;

int main(){
	int num;
	cout<<"enter number:";//28,35,45
	cin>>num;
	
	if(num%7==0){
		cout<<"divisible by 7\n";
		if(num%2==0){
			cout<<"is a even number:";
		}
		else{
			cout<<"is a odd number:";
		}
	}
	else{
		cout<<"is not divisible by 7\n:";
		if(num%2==0){
			cout<<"is a even number:";
		}
		else{
			cout<<"is a odd number:";
		}
	}
}
