//============================Abstract class===============
//===========================pure virtual function===============
#include<iostream>
using namespace std;

//class RBI{
//	public:
//		virtual void interest()=0;      //pure virtual function
//		virtual void reporate()=0;      //pure virtual function
//		//2 pure virtual fun() declare
//		void information(){
//			cout<<"Interest rate should be defined by respecive bank\n";
//		}
//		
//};
//class SBI : public RBI{
//	public:
//		void interest(){
//			cout<<"SBI interest rate is 5% \n";
//		}
//		void reporate(){
//			cout<<"SBI repo rate is 8% \n";
//		}
//};
//int main(){
//	RBI *p = new SBI;
//	p->interest();
//	p->reporate();
//}
//======================================================
//class Media{
//	public:
//		virtual void play()=0;
//};
//		
//class Audio: public Media{
//	public:
//	void play(){
//		cout<<"play Audio\n";
//	}
//};
//class Video: public Media{
//	public:
//	void play(){
//	cout<<"play video";
//}
//};
//int main(){
//	Media *p = new Video;
//	Media *p1 = new Audio;
//	p1->play();
//	p->play();
//}
//===========================================
//class RBI{
//	public:
//		virtual void interest()=0;
//		virtual void reporate()=0;
//		
//		void information(){
//			cout<<"------------------------------";
//		}
//};
//class SBI : public RBI{
//	void interest(){
//		cout<<"interest 5%";
//	}
//	void reporate(){
//		cout<<"reporate 8%";
//	}
//};
//int main(){
//	RBI *p = new SBI;
//	p->interest();
////	p->reporate();
//}
//==============================================================
//class shape{
//	public:
//	   virtual void area()=0;
//};
//class circle: public shape{
//	void area(){
//		int r;
//		cout<<"enter r: ";
//		cin>>r;
//		cout<<"area of circle : "<< 3.14*r*r;
//	}
//};
//class rectangle: public shape{
//	void perimeter(){
//		cout<<"perimeter of rectangle";
//	}
//};
//int main(){
//	shape *p = new circle;
//	p->area();
//}
//==========================poyl(5th)===============

//class Employee{
//	public:
//		virtual void calculate_sal()=0;
//		virtual void display_detail()=0;
//};
//class Manager: public Employee{
//	void calculate_sal(){
//		cout<<"salary+perks\n";
//	}
//	void display_detail(){
//		cout<<"All Details\n";
//	}
//	
//};
//class Worker : public Employee{
//	void calculate_sal(){
//		cout<<"salary+perks+shares company\n";
//	}
//	void display_detail(){
//		cout<<"-------working on----------";
//	}
//	
//};
//int main(){
//	Employee *p = new Manager;
//	p->calculate_sal();
//	p->display_detail();
//	Employee *w = new Worker;
//	w->calculate_sal();
//	w->display_detail();
//	
//}
//=========================Ques 3rd==========================
class BankAccount{
	public:
		virtual void deposite()=0;
		virtual void withdraw()=0;
};
class SavingAccount:public BankAccount{
		void deposite(){
			cout<<"deposited:\n";
		}
		void withdraw(){
			cout<<"withdrawer:\n";
		}
};
class CheckingAccount:public BankAccount{
		void deposite(){
			cout<<" balance deposited:\n";
		}
		 void withdraw(){
			cout<<" balance withdrawer:";
		}
};
int main(){
	BankAccount *p = new CheckingAccount;
	p->deposite();
	p->withdraw();
	BankAccount *b = new SavingAccount;
	b->deposite();
	b->withdraw();
}
//======================================================
class 
