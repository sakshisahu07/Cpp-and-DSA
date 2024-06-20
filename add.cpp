//wap to add individual digit of a number n.

#include<iostream>
using namespace std;

int main(){
	int num, sum3=0;
	cout<<"enter a number:";
	cin>>num;
	
	while(num!=0){
		sum3=sum3+(num%10);
		num=num/10;
		
	}
	cout<<sum3;
	
}
