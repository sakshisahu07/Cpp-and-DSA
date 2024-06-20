#include<iostream>
using namespace std;

class A{
	public:
	void f1(){
		cout<<"Function of class A";
	}
};
class B{
	public:
	void f1(){
		cout<<"Function of class B";
	}
};
class C:public A,public B{
	public:
	void f1(){
		cout<<"Function of class C";
	}
};
int main(){
	C c;
	//C.f1.A;
	c.C::f1();
}
