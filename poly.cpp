#include <iostream>
using namespace std;

//void f1(int){
//	cout<<"some definition:";
//}
//void f1(){
//	cout<<"some other definition:";
//}
//int main(){
//	int num=90;
//	if(1){
//		double num = 90.9;
//	}
//}
//wap
//void add(int a,int b){
//	cout<<"Addition:"<<a+b<<endl;
//}
//void add (int a,int b,int c){
//	cout<<"Addition:"<<a+b+c<<endl;
//}
//void add (double a,int b){
//	cout<<"Addition:"<<a+b<<endl;
//}
//int main(){
//	add(3.4,5);//link--> void add(double,int);
//	add(4,5);//link-->  void add(int,int);
//	add(1,2,3);//link--> void add (int,int,int);
//}
////partial matching overloading
//
//void add(int a,int b){
//	cout<<a+b<<endl;
//	cout<<"int int \n";
//	
//}
//
//void add(double a,int b){
//	cout<<a+b<<endl;
//	cout<<"double int \n";
//}
//int main(){
//	add(45.6,67.8);//one partial matching-->double ,int
////	add(3.4,5);
////	add(1,2);
////	add(1,2,3);
//}

//function overlolading

//void add(int a,int b){
//	cout<<"Addition:"<<a+b<<endl;
//	
//}
//void add(int a,int b,int c){
//	cout<<"Addition:"<<a+b<<endl;
//}
//void add(double a,int b){
//	cout<<"Addition:"<<a+b<<endl;
//}
//int main(){
//	add(3.4,5);
//	add(1,2);
//	add(1,2,3);
//}

//add with outsider
//class Addition{
//	private:
//		int n1,n2;
//	public:
//		Addition(int a,int b){
//			n1=a;
//			n2=b;
//		}
//		void add_withoutsider(int a){
//			cout<<a+n1+n2<<endl;
//		}
//		void add_withoutsider(double a){
//			cout<<a+n1+n2<<endl;
//		}
//	};
//
//int main(){
//	Addition obj(2,3);
//	obj.add_with_outsider(78.9);
//}
//
//class Addition{
//	private:
//		int n1,n2;
//	public:
//		Addition(int a,int b){
//			n1=a;
//			n2=b;
//		}
//		void multi(int a){
//			cout<<a*n1*n2<<endl;
//		}
//		void multi(double a){
//			cout<<a*n1*n2<<endl;
//		}
//	};
//
//int main(){
//	Addition obj(2,3);
////	obj.add_with_outsider(78.9);
//	obj.multi(7.8);
//}
//again
//class Addition{
//	private:
//		int n1,n2;
//	public:
//		Addition(int a,int b){
//		
//		n1=a;
//		n2=b;
//}
//void substract(int a){
//	cout<<a-n1-n2<<endl;
//}
//void substract(double a){
//	cout<<a-n1+
//	n2<<endl;
//}
//};
//int main(){
//	Addition obj(2,3);
//	obj.substract(7.8);
//}

class Addition{
	private:
		int n1,n2;
	public:
		Addition(int a,int b){
		n1=a;
		n2=b;
	}
	void add(int a){
	cout<<a+n1+n2<<endl;
	}
	void add(double a){
	cout<<a+n1+n2<<endl;
	}
	int main(){
		Addition obj(2,3);
		obj.add(7.8);
	}
};

		

