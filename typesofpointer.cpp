#include<iostream>
using namespace std;
//
//int main(){
//	//int a=90,b=80,c;
//	int *p; //wild pointer // only declare not assign it means wild pointer it gives random value
//	//int *p=NULL;   //null pointer // null always give zero value.
//	cout<<p<<endl;
//}
//===============danling pointer=====================
//when pointer points any random location it is called danling to solve danling we use null pointer
//int main(){
//	double *w=new double;
//	*w=90;
//	delete(w);
//	//w-->danling pointer
//	w=NULL;  //danling -->NULL -->valid
//}
//========================Void pointer=======================
//adv-->void pointer holds any block of address int double char.
//disadv-->dereference typecasting.
//int main(){
//	int a=90;
//	char c='k';
//	double b=90.76;
//	void *p=&c;
//	cout<<"data at c variable " <<(*(char*)p)<<endl;
//	
//	p=&b;
//	cout<<"data at b variable " <<(*(double*)p)<<endl;
//	c
//  	p=&a;
//	cout<<"data at a variable " <<(*(int*)p)<<endl;
//}
//int main(){
//	int a=80;
//	double b=80.90;
//	char c='k';
//	void *p=&a;
//	cout<<"Dta at variable a"<<(*(int*)p)<<endl;
//	p=&b;
//	cout<<"Data at variable b"<<(*(double*)p)<<endl;
//	p=&c;
//	cout<<"Data at variable c"<<(*(char*)p)<<endl;
//}

//====================Double pointer======================
//int main(){
//	int  a=90;
//	int *p=&a;
//	int **p1=&p;
//	
//	cout<<a<<endl;
//	cout<<*p<<endl;
//	cout<<**p1<<endl;
//}
int main(){
	int a=60;
	int *p=&a;
	int **p1=&p;
	
	cout<<a<<endl;
	cout<<*p<<endl;
	cout<<**p1<<endl;
}
