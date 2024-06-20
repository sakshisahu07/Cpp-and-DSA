#include<iostream>
using namespace std;
 
//class Employee{
//	private:
//		string name,dep,des,performance;
//		int eid;
//		void set_performance(){
//			int n;
//			cout<<"Enter any given number\n";
//			cout<<"bad-0,avg-1,good-2,verygood-3,excellent-4\n";
//			cin>>n;
//			if(n==0)
//			performance="bad";
//			else if(n==1)
//			performance="avg";
//			else if(n==2)
//			performance="good";
//			else if(n==3)
//			performance="very good";
//			else if(n==4)
//			performance="Excellent";
//			
//		}
//		public:
//			void setter(){
//				cout<<"Enter eid,name,dep,des:";
//				cin>>eid>>name>>dep>>des;
//				set_performance();
//			}
//			void getter(){
//				cout<<"eid:"<<eid<<"name:"<<name<<endl;
//				cout<<"Department "<<dep<<"designation:"<<des<<endl;
//				cout<<"yearly performance:"<<performance;
//			}
//};
//int main(){
//	Employee c;
//	c.setter();
//	c.getter();
//}
class person{
	protected:
		string name;
		int age;
	public:
		person(){
			cout<<"Enter name and age:";
			cin>>name>>age;
		}
		person(string n,int a){
			name=n;
			age=a;
		}
};
class Employee:public person{
	int eid;
	string department;
public:
	Employee(){
		cout<<"Enter eid and department";
		cin>>eid>>department;
	};
	Employee(string n,int a,int id,string d):person(n,a){
		eid=id;
		department=d;
	}
	void display(){
		cout<<name<<" "<<age<<" "<<eid<<" "<<department;
		
	}
};
int main(){
	Employee e;//employee-->default,person-->default
	//Employee e(101,"hr");//error
//	Employee e("ajay",24,202,"hr");//employee--(child)-->parameterised, person(parent)-->parameterised
	e.display();//employee(child)-->default,  person(parent)-->default
}
