//wap to perform operator overloading in which we are going to overload(+)
//operator such that it gives class total of all student.

#include<iostream>
using namespace std;

class student{
	int marks;
public:
	student(int a)	{
		marks=a;
	}
	void display(){
		cout<<marks<<endl;
	}
	//ob=s2  //s1+s2
	//cout<<ob.marks<<endl;      s2-->marks
	//cout<<marks<<endl;         s1-->marks
	student operator+(student ob){
		student temp(0);
		temp.marks=marks+ob.marks;
		return temp;
	}
	//Student operator+ Student object){
		
	//}
};
int main(){
	student s1(23),s2(67),s3(22),s4(11);
	student result=s1+s2+s3+s4;
	result.display();
	//s1.display();
	//s1+s2;       //s1.operator+(s2)
	//s2+s1;       //s2.operator+(s1)
	
	}
	

//class student{
//	int marks;
//public:
//	student(int a){
//		marks = a;
//	}
//	void display(){
//		cout<<marks<<endl;
//	}
//	student operator+(student ob){
//		student temp(0);
//		if(marks>ob.marks)
//			temp.marks=marks;
//		else
//			temp.marks=ob.marks;
//		return temp;
//	}
//	
//};
//int main(){
//	student s1(23),s2(12),s3(11),s4(19);
//		student result = s1+s2+s3+s4;
//		result.display();
//	
//	}

//class student{
//	int marks;
//	public:
//		student (int a){
//			marks=a;
//		}
//	void display(){
//		cout<<marks<<endl;
//	}
//	
//	student operator + (student ob){
//		student temp(0);
//		if(marks>ob.marks)
//		temp.marks=marks;
//		else
//		temp.marks=ob.marks;
//		return temp;
//	}
//};
//int main(){
//	student s1(23),s2(11),s3(13),s4(8);
//	student result= s1+s2+s3+s4;
//	result.display();
//}
//unary operator ++s1(23)
//class Student{
//	int marks;
//public: 
//	Student(int a){
//		marks=a;
//	}
//	void display(){
//		cout<<marks<<endl;
//	}
//   void operator ++  (){
//	marks=marks+10;
//
//}
//};
//int main(){
//	Student s1(23);
//    s1.display();
//    ++s1;  // s1.operator++()
//    s1.display();
//}





