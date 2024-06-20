
//=================================Deep constructor=====================

#include<iostream>
using namespace std;

class Student{
	private:
		string name;
		int age,*marks;
public:
	Student(string n,int a,int m){
		name=n;
		age=a;
		marks=new int;
		*marks=m;
	}
	void display(){
		cout<<"Name:"<<name<<" Age: "<<age<<" Marks: "<<*marks<<endl;
	}
	void change_detail(int m){
		*marks=m;
	}
	
	Student(Student &obj){
		name=obj.name;
		age=obj.age;
		marks=new int;
		*marks=*obj.marks;
		//cout<<"Explicit code define";
	}
};
	int main(){
		Student s("Aman", 23 ,89);
		Student s1(s);  //s1(s)    s1=s   ----> operator overload
		s.display();
		s1.display();
		s1.change_detail(70);
		s.display();
		s1.display();
	}

