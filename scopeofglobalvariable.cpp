#include<iostream>
using namespace std;

class Student{
	private:
		int marks;
		string name;
	public:
		void setvalue();
		void getvalue();
		Student();
};

	Student::Student(){
		name="";
		marks=0;
	}
void Student::setvalue(){
	cout<<"Enter name and marks:";
	cin>>name>>marks;
}
void Student::getvalue(){
	cout<<"Name"<<name<<" marks:"<<marks;
}
int main(){
	Student *s = new Student;
	s->setvalue();
	s->getvalue();
}









#include<iostream>
using namespace s
