#include<iostream>
using namespace std;
//
//void f1(){
//	cout<<"This is function f1\n";
//	f1();
//}
//int main(){
//	f1();
//}

//wap to find the factorial of a number by using recursion.

int  fact(int n){
	if(n<0){
		cout<<"There is no factorial of negative num";
		return 0;
	}
	else if(n==0 || n==1)  //exit point
	{
		return 1;
	}
	else{
		return n*fact(n-1);  // recursion
	}
}
int main(){
	cout<<fact(4);
}
