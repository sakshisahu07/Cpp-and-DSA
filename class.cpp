//wap to create a class named employee.
// data member--> name,eid,salary,year,gender.
//member function-->salary_thismonth(),promotion(),display()
#include<iostream>
using namespace std;
//class Employee{
//	public:
//		string name;
//		int eid,year;
//		double salary;
//		char gender;
//		
//		void display(){
//			cout<<"employee id:"<<eid<<endl;
//			cout<<"Name:"<<name<<"Year of service"<<year<<endl;
//			cout<<"Salary:"<<salary<<"Gender:"<<gender<<endl;
//			
//		}
//		void promotion(){
//			cout<<year<<"jjjj";
//			if(year>5){
//				cout<<"Congrats u got a promotion\n";
//				salary+=10000;//salary=salary+10000
//				cout<<"now ur salary is :"<<salary;
//			}
//			else
//			cout<<"sorry";
//		}
//		
//};
//int main(){
//	Employee e1,e2;
//	cout<<"Enter eid,name,salary,gender,experience employee 1 :";
//	cin>>e1.eid>>e1.name>>e1.salary>>e1.gender>>e1.year;
//	cout<<"Enter eid,name,salary,gender,experience employee 2 :";
//	cin>>e2.eid>>e2.name>>e2.salary>>e2.gender>>e2.year;
//	e1.display();
//	e2.display();
//	e1.promotion();
//	e2.promotion();
//	
//	
//}

//constructor
class Employee{
	public:
		string name;
		int eid,year;
		double salary;
		char gender;
		
//			cout<<"Enter name.....";
//			cin>>name>>eid;
//			name="sakshi";
//			eid=1;
//			year=5;
//			salary=40000;
//			gender='f';
//			cout<<"constructor call:";
		
		Employee(){//default
			cout<<"enterid,name,gender,salary,experience employee 1:";
			cin>>eid>>name>>gender>>salary>>year;
		}
		Employee(int id, string n,char g,double s,int y ){//parameterised
			eid=id;
			name=n;
			gender=g;
			salary=s;
			year=y;
		}
		void display(){
			cout<<"employee id:"<<eid<<endl;
			cout<<"Name:"<<name<<"Year of service"<<year<<endl;
			cout<<"Salary:"<<salary<<"Gender:"<<gender<<endl;
			
		}
		void promotion(){
			cout<<year<<"jjjj";
			if(year>5){
				cout<<"Congrats u got a promotion\n";
				salary+=10000;//salary=salary+10000
				cout<<"now ur salary is :"<<salary;
			}
			else
			cout<<"sorry";
		}
		
};
int main(){
	Employee e1(101,"ajay",'m',4444,5);
	e1.display();
	
	
}
