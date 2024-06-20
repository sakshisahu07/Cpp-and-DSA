//method overriding virtual function
#include<iostream>
using namespace std;

//class Employee{
//	public:
//	virtual	void prepare_salary(){
//			cout<<"salary +HRA\n";
//		}
//		void promotion(){
//			cout<<"year > 2-->promotion\n";
//		}
//			
//};
//	
//class Executive : public Employee{
//	public:
//		void prepare_salary(){
//			cout<<"salary+HRA+company shares+perk\n";
//		}
//};
//int main(){
//	Employee *p = new Executive;
//	p->prepare_salary();
//	p->promotion();
//	//when virtual keyword is used with f() in parent class
//	//pointer ddpendency vanish
//	//now we depend n object creation
//	
//}

class Employee {
	public:
		 virtual void prepare_salary(){
			cout<<"salary+HRA";
		}
		void promotion(){
			cout<<"Year --> 2-------------------";
		}
};
class Executive : public Employee{
	public:
		void prepare_salary(){
			cout<<"salary+HRA+company shares+perks";
		}
		void promotion(){
			cout<<"Year --> 2-------------------";
		}
};
int main(){
	Employee *p = new Executive;
	p->prepare_salary();
	p->promotion();
}

//=========================virtual functoin=====================
//class Employee{
//	public:
//		virtual void pre_sal(){
//			cout<<"Salary+HRA";
//		}
//		void promotion(){
//			cout<<"year>2--->promotion:";
//		}
//};
//class Executive:public Employee{
//	public:
//		void pre_sal(){
//			cout<<"Salary+HRA+perks+share company\n";
//		}
//	void promotion(){
//			cout<<"year>4--->promotion:";
//		}
//};
//int main(){
//	Employee *p = new Executive;
//	p->pre_sal();
//	p->promotion();
//}
//

