#include<iostream>
using namespace std;

int main(){
	int n,sum=0;
	
	try{
	while(1){
		
		string ans;
		cout<<"Enter number:";
		cin>>n;
		if(n>0){
			sum=sum+n;
			cout<<"do u wnt to continue";
			cin>>ans;
			if(ans=="yes")
				continue;
			else if
				(ans=="no")
				break;
			else
			 	throw ans;
		}
		else 
			throw n;
	}
}
catch(int n){
	cout<<" u entered negetive number\n";
}
catch(string n){
	cout<<"u entered wrong input\n";
}
cout<<"Result"<<sum;
}
