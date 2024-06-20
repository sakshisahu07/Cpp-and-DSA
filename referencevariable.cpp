#include<iostream>
using namespace std;

int main(){
	
	int a=90;
	int &second_name=a;
	cout<<a<<" "<<second_name<<endl;
	second_name=900; //changes reflect original.
	cout<<a<<" "<<second_name<<endl;
}
