#include<iostream>
using namespace std;

//class circle{
//	double rad;
//	double ar;
//	double per;
//	
//	public:
//		circle(double r){
//			rad = r;
//		}
//		void area(){
//			double ar;
//			ar=3.14*rad*rad;
//			cout<<"Area ofcircle is:"<<ar<<endl;
//			
//		}
//		void peri(){
//			
//			per=2*3.14*rad;
//			cout<<"perimeter of circle:"<<per<<endl;
//			
//		}
//		void display(){
//			cout<<"The area of circle:"<<ar<<endl;
//			cout<<"perimeter of circle:"<<per;
//		}
//};
//int main(){
//	circle obj(2);
//	obj.peri();
//	obj.area();
//	obj.display();
//}
//=================================Animal============================
//class Animal{
//	string str, category;
//	int leg;
//	
//	public:
//		Animal(string s,int l,string c){
//			str=s;
//			leg=l;
//			category=c;
//		}
//		void calling(){
//			name();
//			no_leg();
//			categ();
//		}
//		void details(){
//			set_detail();
//		}
//		void cat(){
//			categ();
//		}
//		private:
//			void name(){
//				cout<<"Enter a name of Animal:"<<str;
//			}
//			void no_leg(){
//				cout<<"\n Number of legs:"<<leg;
//			}
//			void categ(){
//				cout<<"\n Mention the category"<<category;
//			}
//			void set_detail(){
//				if(category=="herbivores")
//					cout<<"Animal that can eat plants:";
//				else if(category=="carnivores")
//					cout<<"Animal that can eat only meat:";
//				else
//					cout<<"Animal that can eat both:";
//			}
//};
//
//int main(){
//	Animal obj1("Elephant", 4, "herbivores" ),obj2("lion",4,"carnivores"),obj3("bear",4,"omnivores");
//	obj1.calling();
//	obj1.details();
//	obj1.cat();
//	cout<<endl;
//	obj2.calling();
//	obj2.details();
//	cout<<endl;
//	obj3.calling();
//	obj3.details();
//}

//=============================resume====================
//
//class Resume{
//	string name;
//	double per_10;
//	double per_12;
//	double per_deg;
//	bool cur;
//	
//	public:
//		Resume(string n,double p_10,double p_12,double p_d,bool c){
//			name=n;
//			per_10=p_10;
//			per_12=p_12;
//			per_deg=p_d;
//		    cur= c;
//		}
//		void update_percentage(){
//			cout<<"The update percentages of 10th,12th,degree:"<<endl;
//			cin>>per_10>>per_12>>per_deg;
//		}
//		void update_name(){
//			cout<<"The update name:"<<endl;
//			cin>>name;
//		}
//		void display(){
//			cout<<"The update name:"<<endl;
//			cout<<name<<endl;
//			cout<<"The update percentage:"<<endl;
//			cout<<per_10<<""<<per_10<<" "<<per_deg;
//			cout<<cur<<endl;
//		}
//};
//int main(){
//	Resume s("sakshi",67,78,89,"True");
//	s.display();
//	s.update_name();
//	s.update_percentage();
//	s.display();
//}
//===============================ques 5th====================

//class Student{
//	private:
//		int s1,s2,s3,s4,s5;
//		double per;
//		char gra;
//		string student_name;
//		
//	public:
//		
//		Student(){
//			cout<<"Enter your name:";
//			cin>>student_name;
//			
//			cout<<"enter marks of five subject:";
//			cin>>s1>>s2>>s3>>s4>>s5;
//		}
//		void calc_per(){
//			double per;
//			int sum=0;
//			
//			sum=s1+s2+s3+s4+s5;
//			per=(sum/500.0)*100;
//			cout<<"your percentage:"<<per<<"%"<<endl;
//			
//		}
//		void calc_grad(){
//			
//			if(per>=60)
//			gra='A';
//			
//			else if(per>=50 && per<60)
//			gra='B';
//			
//			else if(per>=40 && per<50)
//			gra='C';
//			
//			else
//			gra='D';
//		}
//		void display(){
//			cout<<"Your name is :"<<student_name<<endl;
//			cout<<"Your percentage is:"<<per<<endl;
//			cout<<"Your Grade is:"<<gra<<endl;
//		}
//};
//
//int main(){
//	Student st;
//	st.calc_per();
//	st.calc_grad();
//	st.display();
//}

class Factorial{
	private:
		int num;
		
	public:
		factorial(int n){
			num=n;
		}
		void factorial(){
			int fact=1;
			
			for(int i=num; i>=1; i--){
				fact=fact*i;
			}
			cout<<"The factorial is "<<fact;
		}
		void display(){
			int fact;
			cout<<"The factorial is "<<fact;
		}
};
int main(){
	Factorial f(4);
	f.factorial();
	f.display;
}
