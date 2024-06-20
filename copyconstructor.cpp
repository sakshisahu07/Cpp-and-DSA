
//=============================Shalow Constructor===============

#include<iostream>
using namespace std;

class Student{
	private:
		string name;
		int age,marks;
public:
	Student(string n,int a,int m){
		name=n;
		age=a;
		marks=m;
	}
	void display(){
		cout<<"Name:"<<name<<" Age: "<<age<<" Marks: "<<marks<<endl;
	}
	
	Student(Student &obj){
		name=obj.name;
		age=obj.age;
		marks=obj.marks;
		//cout<<"Explicit code define";
	}
};
	int main(){
		Student s("Aman", 23 ,89);
		s.display();
		Student s1(s);  //s1(s)    s1=s   ----> operator overload
		s1.display();
	}

