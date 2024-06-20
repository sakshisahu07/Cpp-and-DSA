#include<iostream>
using namespace std;

int main(){
	double tenth,twelth,degree;
	int age,experience;
	string name;
	cout<<"enter ur name and age:";
	cin>>name>>age;
	cout<<"enter your 10th,12th,degree percententage:";
	cin>>tenth>>twelth>>degree;
	cout<<"enter experience if any:";
	cin>>experience;
	
	if(tenth>=60 && degree>=60){
		if(twelth>=75){
			if(age>18 && age<=30)
				cout<<"u r eligible for scale 1:";
			else if(age>=25 && age<=45 && experience>=5 && twelth>=80)
				cout<<"u r eligible for scale 2";
			else
				cout<<"u r not eligible for any exam";
				
		}
		
		
	}
	
	
	
}
