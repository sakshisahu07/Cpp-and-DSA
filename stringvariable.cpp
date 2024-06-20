
#include<iostream>
using namespace std;
//
//class Cybrom{
//	public:
//		string st_name,course;
//		static string institute_name;
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
//};
//string Cybrom::institute_name="cybrom academy";
//
//int main(){
//Cybrom obj1("sanya","python fs"),obj2("riya","java");
//obj1.display();
//obj2.display();
////obj1.institute_name="Rgpv";//unhealthy practice
//Cybrom::institute_name="cybrom infotect";
//obj1.display();
//obj2.display();
//}

class Cybrom{
	public:
		string st_name,course;
		static string institute_name;
		
	public:
		Cybrom(string n, string c){
			st_name = n;
			course = c;
		}
		void display(){
			cout<<"Institute Name"<<institute_name<<endl;
			cout<<"Name"<<st_name<<endl;
			cout<<"Course"<<course<<endl;
		}
};

string Cybrom::institute_name="Cybrom Academy";

int main(){
	Cybrom obj1("sakshi","java fs"),obj2("riya" ,"python fs");
	obj1.display();
	obj2.display();
	Cybrom::institute_name="cybrom infotect";
	obj1.display();
	obj2.display();
}

