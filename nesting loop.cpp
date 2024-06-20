#include<iostream>
using namespace std;

int main(){
	for(int i=1;i<=5;i++){//outer loop
		cout<<"body of outer loop iteration number:---->"<<i<<"\n";
		for(int j=1;j<=2;j++){//inner loop
			cout<<"body of inner loop iteration number:--->"<<j<<"\n";
		}
		cout<<"\n=======================";
	}
}
//write a program to draw a pattern
