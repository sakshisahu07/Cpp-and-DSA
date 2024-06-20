
//===========================friend class=============================

#include<iostream>
using namespace std;
//
//class Bank{
//	private:
//		int acc_num;
//		double bal;
//		string name;
//	public:
//		Bank(int a,double b,string n){
//			acc_num=a;
//			bal=b;
//			name=n;
//		}
//		void display(){
//			cout<<"Account Number:"<<acc_num<<endl;
//			cout<<"Name"<<name<<endl;
//			cout<<"Balance"<<bal<<endl;
//		}
//		friend class PhonePe;
//};
//class PhonePe{
//	public:
//		void deposite(Bank & obj){
//			int n;
//			cout<<"Enter amount:";
//			cin>>n;
//			obj.bal=obj.bal+n;
//		}
//		void withdrawl(Bank & obj){
//			int n;
//			cout<<"Enter amount:";
//			cin>>n;
//			obj.bal=obj.bal-n;
//		}
//};
//int main(){
//	Bank b(2255,80000,"sakshi");
//	b.display();
//	PhonePe p;
//	p.deposite(b);
//	b.display();
//	p.withdrawl(b);
//	b.display();
//}

//==========================friend class=========================
class Bank{
	private:
		int acc_num;
		double bal;
		string name;
		
	public:
		Bank(int a,double b,string n){
			acc_num=a;
			bal=b;
			name=n;
		}
		
	void display(){
		cout<<"Account Num"<<acc_num<<endl;
		cout<<"Balance"<<bal<<endl;
		cout<<"Name"<<name;
	}
	friend class PhonePe;
};

class PhonePe{
	public:
		void deposite(Bank & obj){
			int n;
			cout<<"Enter amount:";
			cin>>n;
			obj.bal=obj.bal+n;
		}
		void withdrawl(Bank & obj){
			int n;
			cout<<"Enter amount:";
			cin>>n;
			obj.bal=obj.bal-n;
		}
};
int main(){
	Bank b(2255,20000,"riya");
	b.display();
	PhonePe p;
	p.deposite(b);
	b.display();
	p.withdrawl(b);
	b.display();
}
