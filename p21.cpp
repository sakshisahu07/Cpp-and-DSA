
//=====================================Ques 7th==========================
//
#include<iostream>
using namespace std;
//
////class Student{
////	int marks;
////	public:
////		Student(int a){
////			marks=a;
////		}
////		void display(){
////			cout<<marks<<endl;
////		}
////		Student operator * (student ob){
////			student temp(0);
////			temp.marks=marks+ob.marks;
////			return temp;
////			
////		}
////		Student operator * (Student object){
////			
////		}
////};
////
////int main(){
////	Student s1(45),s2(55),s3(7);
////	Student result=s1*s2*s3;
////	result.display();
////	
////}

//=============================Que 1st==========================
//
//class MusicAcademy{
//	int Eno;
//	string name,style;
//	float fee;
//	
//	void chkfee(){
//		string n;
//		cout<<"Enter dance type:";
//		cin>>n;
//		
//		if(n=="Classical"){
//			fee=10000;
//		}
//		else if(n=="Western"){
//			fee=8000;
//		}
//		else if(n=="Freestyle"){
//			fee=11000;
//		}
//	}
//		public:
//			void enrollment(){
//				cout<<"Enter the Eno,Name,style";
//				cin>>Eno>>name>>style;
//				chkfee();
//			}
//			void display(){
//				cout<<fee;
//			}
//	
//};
//int main(){
//	MusicAcademy a;
//	a.enrollment();
//	a.display();
//}
//================================Ques=================================
//class Vehicle{
//	public:
//	virtual void startengine()=0;
//	virtual void stopengine()=0;
//	
//};
//class Car:public Vehicle{
//	void startengine(){
//		cout<<"Car started\n";
//	}
//	void stopengine(){
//		cout<<"Car stoped\n";
//	}
//};
//class Motarcycle:public Vehicle{
//	void startengine(){
//		cout<<"Motarcycle started\n";
//	}
//	void stopengine(){
//		cout<<"Motarcycle stoped\n";
//	}
//};
//
//int main(){
//	Vehicle *p= new Car;
//	p->startengine();
//	p->stopengine();
//	
//	Vehicle *m= new Motarcycle;
//	m->startengine();
//	m->stopengine();
//}

//===========================9th=======================
//int main(){
//	int n;
//	char i;
//	cout<<"Enter number:";
//	cin>>n;
//	
//	if(n>0){
//		for(char i='A';i<='Z';i++){
//			cout<<i<<" ";
//		}
//	}
//	else if(n<0){
//	for(char i='z';i>='a';i--){
//		cout<<i<<" ";
//		}
//	}
//	else if(n==0){
//		cout<<"GOOD BYE";
//	}
//}
//============================6th============================
//class A{
//	public:
//		void f1(){
//			cout<<"function of class A";
//		}
//};
//class B:public A{
//	public:
//		void f1(){
//			cout<<"function of class B";
//		}
//};
//class C: public A,public B{
//	
//};
//int main(){
//	C c;
////	c.f1(); diamond problem ambiguity problem
//	c.B::f1();
//}
//================================Ques 3rd======================
class Highest{
	private:
		int n1,n2,n3;
		public:
			void highest(int a, int b, int c){
				n1=a;
				n2=b;
				n3=c;
			
				if(n1>n2 && n1>n3){
					cout<<"n1 is greator"<<n1;
				}
				else if(n2>n1 && n2>n3){
					cout<<"n2 is greator"<<n2;
				}
				else{
					cout<<"n3 is greatest"<<n3;
				}
			}
			highest(int a,int b,int c,int d){
				n1=a;
				n2=b;
				n3=c;
				n4=d;
				
			if(n1>n2 && n1>n3 && n1>n4){
				cout<<"n1 is greatest"<<n1;
			}
			else if(n2>n1 && n2>n3 && n3>n4){
				cout<<"n2 is greatest"<<n2;
			}
			else if(n3>n1 && n3>n2 && n3>n4){
				cout<<"n3 is greatest"<<n3;
			}
			else{
				cout<<"n4 is greatest";
			}
			}
};
int main(){
	Highest aa;
	aa.highest(2,3,4);
}
