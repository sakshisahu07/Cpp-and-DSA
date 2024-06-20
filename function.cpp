#include<iostream>
using namespace std;

//int fact(int a){
//	int facto=1;
//	for(int i=a;i>=1;i--){
//		facto=facto*i;
//	}
//	return facto;
//}
//int main(){
//	int n1,final;
//	cout<<"Enter range:";
//	cin>>n1;
//	final=fact(n1);
//	cout<<"Factorial of number:"<<final;
//	
//	return 0;
//}
//======================reverse==========================

//int rev(int a){
//	int last,rev_n;
//	while(a>0){
//		last=a%10;
//		rev_n=(rev_n*10)+last;
//		a=a/10;
//	}
//	return rev_n;
//}
//int main(){
//	int num,result;
//	cout<<"Enter number:";
//	cin>>num;
//	result=rev(num);
//	cout<<"Reverse of number:"<<result;
//}
//=======Armstrong=============
//string arm(int a){
//int last,result=0,temp;
//	temp=a;
//	while(a>0){
//	last=a%10;
//	result=result+(last*last*last);
//	a=a/10;
//}
//	if(result==temp)
//	return "yes";
//	else
//	return "no";
//}
//int main(){
//	int num;
//	string msg;
//	cout<<"Enter number:";
//	cin>>num;
//	msg=arm(num);
//	cout<<"Armstrng number:"<<msg;
//}
//=====================pali=======================
string palin(int a){
	int last,result=0,temp;
	temp=a;
	while(a>0){
		last=a%10;
		result=(result*10)+last;
		a=a/10;
	}

	if (result==temp)
	return "yes";
	else 
	return "no";
}
int main(){
	int num;
	string msg;
	cout<<"Enter number:";
	cin>>num;
	msg=palin(num);
	cout<<"Palindrome number:"<<msg;
}
		
	

