//======================================Structure=====================================================

#include<iostream>
using namespace std;

struct Student1{
	int roll;
	string name;
	
	void f1(){
		cout<<"This is a function of structure";
	}
	
};
class Student{
	public:
		int roll;
		string name;
		
};
int main(){
	Student1 obj;
	obj.name="ajay";
	obj.roll=101;
	cout<<obj.name<<endl;
	cout<<obj.roll<<endl;
	obj.f1();
}
//======================================stack=======================================
//Student var, *p;
//p=&var;
//var.name="ajay";
//var.roll=101;
//cout<<p->name;
////====================================heap============================
//Student *p2 = new Student;
//p2->name"sakshi";
//cout<<name;
//}
