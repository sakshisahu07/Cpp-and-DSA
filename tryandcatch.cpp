#include<iostream>
using namespace std;

//=========================try & catch block=====================
//int main(){
//	double a,b;
//	try{
//		cout<<"Enter two numbers:";
//		cin>>a>>b;
//		if(b==0){
//			throw b;//exception throw
//		}
//		cout<<"Division:"<<a/b<<endl;
//	}
//	catch(double ex){
//		cout<<"Denominator cant be zero:";
//		cout<<"U gave zero--->"<<ex<<endl;
//	}
//	}
//int main(){
//	double a,b;
//	try{
//		cout<<"Entertwo numbers:";
//		cin>>a>>b;
//		if(b==0){
//			throw b;//exception throw
//		}
//		cout<<"Division:"<<a/b<<endl;
//	}
//	catch(double ex){
//		cout<<"Denominator cant be zero:";
//		cout<<"U gave zero-->"<<ex<<endl;
//	}
//}
//	
//int main()	{
//	double a,b;
//	try{
//		cout<<"Enter a number:";
//		cin>>a>>b;
//	
//		if(b==0){
//		throw b;
//	}
//	 cout<<"division:"<<a/b<<endl;
//	
//}
//catch(double ex){
//	cout<<"denominator can't be zero";
//	cout<<"U gave zero-->"<<ex<<endl;
//}
//}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
//	
//int main(){
//	double a,b;
//	try{
//		cout<<"Enter a number:";
//		cin>>a>>b;
//		if(b==0){
//			throw b;
//		}
//		cout<<"Division:"<<a/b<<endl;
//	}
//	catch(double ex){
//		cout<<"denminator can't be zero:";
//		cout<<"U gave zero-->"<<ex<<endl;
//	}
//}
	
	
	
int main()	{
	double a,b;
	try{
		cout<<"Enter a number:";
		cin>>a>>b;
		if(b==0){
			throw b;
		}
		cout<<"Division:"<<a/b;
	}
	catch(double ex){
		cout<<"Denominator can't be zero:";
		cout<<"U gave zero-->"<<ex<<endl;
	}
}
	
	
	
	
	
	
	
