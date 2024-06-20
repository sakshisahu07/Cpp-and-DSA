//multiple inheritance
#include <iostream>
using namespace std;

//class A{
//	public:
//		void f1(){
//			cout<<"function of class A";
//		}
//};
//class B{
//	public:
//		void f1(){
//			cout<<"function of class B";
//		}
//};
//class C:public A,public B{
//	//public A--> f1(), B-->f1()
//};
//int main(){
//	C c;
//	//c.f1(); //diamond problem --> conflict, ambiguity
//	c.B::f1(); //scope resolution operator
//}
//

//mutilevel inheritance
//class A{
//	public:
//		void f1(){
//			cout<<"function of class A";
//		}
//};
//class B: public A{
//	//public f1()
//	public:
//		void f1(){
//			cout<<"function of class B";
//		}
//};
//class C: public B{
//	//public f1()
//	public:
//		void f1(){
//			cout<<"function of class C";
//		}
//};
//int main(){
//	 C c;
//	 c.f1();//locality of referene
//}
//hybrid
//class A{
//	public:
//		void f1(){
//			cout<<"function of class A";
//		}
//};
//class B: public A{
//	//public f1()
//	public:
//		void f2(){
//			cout<<"function of class B";
//		}
//};
//class C: public A{
//	//public f1()
//	public:
//		void f3(){
//			cout<<"function of class C";
//		}
//};
//class D:public C,public B{
//	public:
//		void f4(){
//			cout<<"function of class D";
//		}
//};
//int main(){
//	D d;
//	d.f4();
//	d.f3();
//	d.f2();
//	//d.f1();  diamond problem or
//	d.B::f1(); //diamond problem
//	
//	
//}
//
class A{
	void f1(){
		cout<<"function of class A";
	}
};
class B: public A{
	void f2(){
		cout<<"function of class B";
	}
};
class C: public A{
	void f3(){
		cout<<"function of class C";
	}
};
class D:public C, public B{
	void f4(){
		cout<<"function of class D";
	}
};
int main(){
	D d;
	d.f4();
	d.f3();
	d.f2();
	//d.f1();
	d.B::f1();
}

