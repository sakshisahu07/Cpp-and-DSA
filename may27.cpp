#include<iostream>
using namespace std;

//class A{
//	public:
//		void f(){
//		cout<<"Function of class A:";
//	}
//};
//class B:virtual public A{
//	public:
//		void f1(){
//		cout<<"Function of class B:";
//	}
//};
//class C:virtual public A{
//	public:
//		void f2(){
//		cout<<"Function of class C:";
//	}
//};
//class D:public B,public C{
//	public:
//		void f3(){
//		cout<<"Function of class D:";
//	}
//};
//int main(){
//	D d;
//	d.f1();
//	d.f2();
//	d.f3();
//}

class A{
	public:
		void f1(){
			cout<<"Function of class A";
		}
};
class B:virtual public A{
	public:
		void f2(){
			cout<<"Function of class B";
		}
};
class C:virtual public A{
	public:
		void f3(){
			cout<<"Function of class C";
		}
};
class D:public B,public C{
	public:
		void f4(){
			cout<<"Function of class D";
		}
};
int main(){
	D d;
	d.f1();
	d.f2();
	d.f3();
	d.f4();
}
