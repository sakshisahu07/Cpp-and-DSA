#include<iostream>
using namespace std;

int main(){
	int attendance;
	cout<<"enter number of classes";
	cin>>attendance;
	if(attendance<=75){
		cout<<"u will be not allowed to sit in exam";
	}
	else if(attendance>=75){
		cout<<"u will be allowed to sit in exam";
	}
	return 0;
	}

