
//====================static function====================================

#include<iostream>
using namespace std;

//class Cybrom{
//	public:
//		string st_name,course;
//		static string institute_name,address;
//	public:
//		Cybrom(string n,string c){
//			st_name=n;
//			course=c;
//		}
//		void display(){
//			cout<<"Institute Name:"<<institute_name<<endl;
//			cout<<"Name:"<<st_name<<endl;
//			cout<<"Course:"<<course<<endl;
//		}
//		static void changeinstitute(string n){
//			institute_name=n;
//			cout<<address<<endl;
//			//cout<<st_name;  //non static member	
//		}
//};
//string Cybrom::address="Bhopal";
// string Cybrom::institute_name="cybrom academy";
//
//int main(){
//	Cybrom obj1("sanya","python fs"),obj2("riya","java");
//obj1.display();
//obj2.display();
////obj1.institute_name="Rgpv";//unhealthy practice
//Cybrom::institute_name="cybrom infotect";
//Cybrom::changeinstitute("rgpv");
//obj1.display();
//obj2.display();
//}

//========================STATIC FUNCTION=================================
//
class student{
	private:
		static int count;
	public:
		student(){
			count++;
		}
		static void display_count(){
			cout<<"Total students:"<<count<<endl;
			}
		
};

int student::count;//count =0, no need
						//by default count=0

int main(){
	student s1,s2,s3;
	student s4,s5;
	student::display_count();
}

//class Cybrom{
//	public:
//		string st_name,course;
//		static string institute_name,city;
//	public:
//	   Cybrom (string n,string c){
//	   st_name=n;
//	   course=c;
//}
//	void display(){
//		cout<<"Institute Name"<<institute_name<<endl;
//		cout<<"Name"<<st_name<<endl;
//		cout<<"Course"<<course<<endl;
//	}
//	//static void change institute(string n)
//	static void changeinstitute(string n){
//		institute_name=n;
//		cout<<city<<endl;
//	}
//};
//string Cybrom::city="bhopal";
//string Cybrom::institute_name="Cybrom academy";
//
//int main(){
//	Cybrom obj1("sanya","python fs"),obj2("riya","java fs");
//	obj1.display();
//	obj2.display();
//	Cybrom::institute_name="Cybrom infotect";
//	Cybrom::changeinstitute("rgpv");
//	obj1.display();
//	obj2.display();
//	
//}
//

