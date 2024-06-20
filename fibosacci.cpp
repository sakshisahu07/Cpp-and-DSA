//Q--->wap to print fionacci series upto n terms.
//n=9

#include<iostream>
using namespace std;

int main(){
	int n1=0,n2=1,n3,n;
	cout<<"enter range:";
	cin>>n;
	
	cout<<n1<<" "<<n2<<" ";
	for(int i=1;i<=n-2;i++){
		n3=n1+n2;
		cout<<n3<<" ";
		n1=n2;
		n2=n3;
	}

}
