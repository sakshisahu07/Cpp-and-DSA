#include<iostream>
using namespace std;

class A{
	public:
		A(){
			cout<<"class A constructor:\n";
		}
		~A(){
			cout<<"class A destructor:\n";
		}
};
class B:public A{
	public:
		B(){
			cout<<"class B constructor:\n";
		}
		~B(){
			cout<<"class B destructor:\n";
		}
};
class C:public B{
	public:
		C(){
			cout<<"class C constructor:\n";
		}
		~C(){
			cout<<"class C destructor:\n";
		}
};
int main(){
//	{
//		A obj;
//	}
//	B obj;
A obj;
B obj1;

}
//scope of variable
