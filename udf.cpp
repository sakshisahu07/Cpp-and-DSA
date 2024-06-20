//wap to create a f() named add which can add 4 numbers 
//parameters -->4 int return-->int
//also find average of all numbers
//parameter & return both
#include<iostream>
using namespace std;
//global space

//int add(int a,int b,int c,int d){//a=n1=2,b=3,c=4,d=5
//	return a+b+c+d;//control goes to main
//					//formal parameters
//}
//
//int main(){
//	int n1,n2,n3,n4,result;
//	cout<<"Enter 4 numbers: ";// 2 3 4 5
//	cin>>n1>>n2>>n3>>n4;//actual parameters
//	
//	result=add(n1,n2, n3, n4);//function calling //control goes to add()
//						//caller f()-->main calledf()-->add (callee)
//	
//	cout<<"addition:"<<result<<endl;
//	cout<<"average:"<<result/4.0;
//}
//int add(int a,int b,int c,int d){
//	return a+b+c+d;
//}
//int main(){
//	int n1,n2,n3,n4,result;
//	cout<<"Enter 4 numbers: ";
//	cin>>n1>>n2>>n3>>n4;
//	result=add(n1,n2,n3,n4);
//	cout<<"adition:"<<result<<endl;
//	cout<<"average:"<<result/4.0;
//}
//3 parameter addition
//4 parameter number
//3 number addition ,4th number--->return great
//great()
//int great(int a,int b,int c,int d){
//	int	value=a+b+c;
//
//	if(value>d)
//		return value;
//	else
//		return d;
//	
//}
//int main(){
//	int n1,n2,n3,n4;
//	cout<<"Enter 4 numbers:";
//	cin>>n1>>n2>>n3>>n4;
//	cout<<"greatest:"<<great(n1,n2,n3,n4);
//}
//int great(int a,int b,int c,int d){
//	int value=a+b+c;
//	if(value>d)
//		return value;
//	else
//		return d;
//}
//int main(){
//	int n1,n2,n3,n4;
//	cout<<"Enter 4 numbers:";
//	cin>>n1>>n2>>n3>>n4;
//	cout<<"greatest:"<<great(n1,n2,n3,n4);
//}
//wap to create a function named average that is created to find out the average of 5 numbers
//parameter-->5 numbers
//return--.string(a message successful)
//string average(int a,int b,int c,int d,int e){
//	double avg=a+b+c+d+e/5.0;
//	cout<<"Average: "<<avg<<endl;
//	return "success";
//}
//int main(){
//	int n1,n2,n3,n4,n5;
//	string msg;
//	cout<<"Enter 5 numbers:";
//	cin>>n1>>n2>>n3>>n4>>n5;
//	msg=average(n1,n2,n3,n4,n5);
//	cout<<"operation is "<<msg;
//}
//fibonacci --->no para no return
//void fibo(){
//	int n1=0,n2=1,limit,n3;
//	cout<<"Enter range upto which u wnt to print:";
//	cin>>limit;
//	cout<<n1<<" "<<n2<<" ";
//	
//	while(1){
//		n3=n1+n2;
//		if(n3>limit)
//		break;
//		cout<<n3<<" ";
//		n1=n2;
//		n2=n3;
//	}
//}
//	int main(){
//		
//		fibo();
//	}
//string average(int a,int b,int c,int d,int e){
//double avg=(a+b+c+d+e)/5.0;
//cout<<"Average:"<<avg<<endl;
//return "success";
//}
//int main(){
//	int n1,n2,n3,n4,n5;
//	string msg;
//	cout<<"Enter 5 numbers:";
//	cin>>n1>>n2>>n3>>n4>>n5;
//	msg=average(n1,n2,n3,n4,n5);
//	cout<<"operation is"<<msg;
//}
//fibo
//void fibo(){
//	int n1=0,n2=1,limit,n3;
//	cout<<"Enter range which u wnt to print";
//	cin>>limit;
//	cout<<n1<<" "<<n2<" ";
//
//while(1){
//	n3=n1+n2;
//	if(n3>limit)
//	break;
//	cout<<n3<<" ";
//	n1=n2;
//	n2=n3;
//}
//}
//int main(){
//	fibo();
//}
////no para no return
//string average(){
//	int a,b,c,d,e;
//	cout<<"Enter 5 numbers:";
//	cin>>a>>b>>c>>d>>e;
//	double avg=(a+b+c+d+e)/5.0;
//	cout<<"Average:"<<avg;
//	cout<<"success";
//}
//int main(){
//	average();
//}
//void fullname(string n,string s){
//	cout<<n+" "+s;
//}
//int main(){
//	string name,surname;
//	cout<<"Enter name and surname :";
//	cin>>name>>surname;
//	fullname(name,surname);
//}
//palindrome======having parameter no return
//string pali(int num){
//	int last,pali=0,temp;
//	temp=num;
//	while(num>0){
//		last=num%10;
//		pali=(pali*10)+last;
//		num=num/10;
//	}
//	if(temp==pali)
//		return"yes";
//	else
//		return "no";	
//	}
//	int main(){
//		int num;
//		string msg;
//		cout<<"Enter sum:";
//		cin>>num;
//		msg=pali(num);
//		cout<<"palindrome result: "<<msg;
//	}
//armstrong
//string arm(int num){
//	int last,armt=0,temp;
//	temp=num;
//	while(num>0){
//		last=num%10;
//		armt=armt+last*last*last;
//		num=num/10;
//	}
//	if(temp=armt)
//	return "yes";
//	else
//	return "no";
//}
//int main(){
//	int num;
//	string msg;
//	cout<<"Enter any armstrong num:";
//	cin>>num;
//	msg=arm(num);
//	cout<<"armstrong result "<<msg;
//}
//void table(int num){
//	for(int i=1;i<=10;i++){
//		cout<<num<<"x"<<i<<"="<<num*i<<endl;
//	}
//}
//	int main(){
//		int n1;
//		cout<<"Enter number:";
//		cin>>n1;
//		table(n1);
//	}
////table range from where u wnt
//void table(int a,int b){
//	for(int i=a;i<=b;i++){
//		for(int j=1;j<=10;j++){
//			cout<<i<<"x"<<j<<"="<<i*j<<endl;
//	}
//	cout<<endl;
//}
//}
//	int main(){
//		int n1,n2;
//		cout<<"Enter number frm which u wnt:";
//		cin>>n1>>n2;
//		table(n1,n2);
// }
//void num(){
//	cin>>num;
//	int random=0;
//	
//	for(int i=2;i<=num;i++){
//		if(num%i==0){
//			cout<<"Not a prime number:";
//			random=1;
//			break;
//		}
//	}
//	if(random==0)
//	cout<<"prime number";
//}
//int main(){
//	int n1,n2;
//	cout<<"Enter number which u wnt:";
//	cin>>n1>>n2;
//	num(n1,n2);	
//}
//hcf--------------no parameter but haqving return
int hcf(){
	int n1,n2,s;
	for(int i=s;i>=2;i--){
		if(n1%i==0 && n2%i==0)
		return i;
	}
}
int main(){
	int r=hcf();
	cout<<r;
}






