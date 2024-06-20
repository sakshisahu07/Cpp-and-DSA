//==============================function overloading====================

#include<iostream>
using namespace std;

//void add(int a, int b){
//	cout<<"Addition"<<a+b<<endl;
//}
//void add(int a, int b,int c){
//	cout<<"Addition"<<a+b+c<<endl;
//}
//void add(double a, int b){
//	cout<<"Addition"<<a+b<<endl;
//}
//int main(){
//	add(3,8,1);
//	add(1.2,3);
//	add(1,2,3);
//}

//=============================operator overloading (doubt)=====================
//class student{
//	int marks;
//public:
//	student (int a){
//		marks=a;
//	}
//	void display(){
//		cout<<marks<<endl;
//	}
//	student operator + (student ob){
//		student temp(0);
//		temp.marks=marks+ob.marks;

//		return temp;
//		
//	}
//	student operator + (student object){
//		
//	}
//};
//int main(){
//	student s1(12), s2(11), s3(10), s4(3);
//	student result = s1+s2+s3+s4;
//	result.display()
//}
//==============================operator overloding==================
//class student{
//	private:
//		int marks;
//	public:
//		student(int m){
//			marks=m;
//		}
//	void display(){
//		cout<<marks<<endl;
//	}
//	void operator + (student obj){
//		cout<<marks<<endl;
//		cout<<obj.marks;
//		cout<<"Total marks:"<<marks+obj.marks;
//	}
//};
//int main(){
//	student s(23),s1(76);
//	s+s1;
//}
//===============================unary operator=========================
//class student{
//	int marks;
//public:
//	student (int a) {
//		marks= a;
//	}
//	void display(){
//		cout<<marks<<endl;
//	}
//	void operator ++ (){
//		marks=marks+10;
//	}
//};
//int main(){
//	student s1(23);
//	s1.display();
//	++s1;
//	s1.display();
//}
//==========================Some important question====================
class Circle{
	public:
		double rad;
		double ar;
		double per;
	public:
		Circle(double r){
			rad=r;
		}
		void area(){
			double ar;
			ar=3.14*rad*rad;
			cout<<"Area of circle"<<ar<<endl;
		}
		void perimeter(){
			double per;
			per=2*3.14*rad;
			cout<<"perimeter of circle"<<per<<endl;
		}
	void display(){
		cout<<"Area of circle"<<endl;
		cout<<"Perimeter of circle"<<endl;
	}
};
int main(){
	Circle obj(6);
	obj.area();
	obj.perimeter();
	obj.display();
}


