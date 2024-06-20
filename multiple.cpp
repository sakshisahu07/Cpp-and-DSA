//#include<iostream>
//using namespace std;
//
//class A{
//	public:
//		void f1(){
//			cout<<"Function of class A";
//		}
//};
//class B{
//	public:
//		void f1(){
//			cout<<"Function of class B";
//		}
//};
//Class C:public A,public B{
//	
//}
//
//int main(){
//	C c;
//	c.B::f1();
//}
//


















#include<iostream>
using namespace std;

class A{
	public:
	void f1(){
		cout<<"function of class A:";
	}
};
class B{
	public:
	void f1(){
		cout<<"function of class B:";
	}
};
class C:public A,public B{
	
};
int main(){
	C c;
	c.B::f1();
	
}
