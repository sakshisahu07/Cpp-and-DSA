//Array of object
//wap to create a aaray of object of class student having attribute name,roll,marks.
//define default constructor accordingly.
//display student detail highest marks
#include<iostream>
using namespace std;

//class student {
//	public: 
//		int roll;
//		string name;
//		double marks;
//	public:
//		student(){
//			cout<<"Enter roll,name,marks:";
//			cin>>roll>>name>>marks;
//		}
//		
//};
//int main(){
//	int n;
//	cout<<"how many record do u wnt to insert";
//	cin>>n;
//	student s[n];
//	
//	for(int i=0;i<n;i++){
//		cout<<"name:"<<s[i].name<<"roll:"<<s[i].roll<<"marks"<<s[i].marks;
//	}
//	 int high =s[0].marks;
//	 for(int i=1;i<n;i++){
//	 	if(s[i].marks>high)
//	 	high=s[i].marks;
//	 }
//	cout<<"Highest"<<high;
//}
//

class student{
	public:
		int roll;
		string name;
		double marks;
	
	public:
	 student(){
	 	cout<<"Enter roll name and marks:";
	 	cin>>roll>>name>>marks;
	 }
	
};
int main(){
	
	int n;
	cout<<"how many record do u want to insert:";
	cin>>n;
	student s[n];
	 for(int i=0;i<n;i++){
	 	cout<<"name:"<<s[i].name<<"roll:"<<s[i].roll<<"marks:"<<s[i].marks;
	 	
	 }
	 int high=s[0].marks;
	 for(int i=0;i<n;i++){
	 	if(s[i].marks>high)
	 	high=s[i].marks;
		 
	 }
	cout<<"highest"<<high;
}
