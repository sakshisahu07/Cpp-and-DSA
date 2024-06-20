#include<iostream>
using namespace std;

int main(){
	int a,b,c;
	cout<<"enter a,b,c:";
	cin>>a>>b>>c;
	
	if(a>b && a>c){
		cout<<a<<"is highest";
		if(b>c)		
			cout<<b<< "is second highest";
		else
			cout<<c<< "is second highest" ;
	}
			
	 else if(b>a && b>c){
		cout<<b<<"is highest:";
		if(a>c)
			cout<<"a is second highest";
		else
			cout<<"c is second highest";
			
	}
	else{
		cout<<"c is highest";
		if(a>b)
			cout<<"a is second highest";
		else
			cout<<"b is second highest";
			
	}
}

