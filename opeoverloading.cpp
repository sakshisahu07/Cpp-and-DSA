#include<iostream>
using namespace std;
//
//class student{
//	private:
//		int marks;
//	public:
//		student(int m){
//			marks=m;
//		}
//		void display(){
//			cout<<marks<<endl;
//		}
//		void operator + (student obj){//s.operator+ (s1)------> = s1
//			cout<<marks<<endl;//marks = (s ke marks)
//			cout<<obj.marks;
//			cout<<"Total marks:"<<marks+obj.marks;
//		}
//};
//int main(){
//	student s(23),s1(76);
//	s+s1;//s.operator+(s1)
//}

class student{
	private:
		int marks;
	public:
		student(int m){
			marks=m;
		}
		void display{
			cout<<marks<<endl;
		}
		
		void operator + (student obj){
			cout<<marks<<endl;
			cout<<obj.marks;
			cout<<"Total marks:"<<marks+obj.marks;
			
		}
};
int main(){
	student s(2),s1(3);
	s+s1;
}


