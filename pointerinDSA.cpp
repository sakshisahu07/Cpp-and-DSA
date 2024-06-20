#include<iostream>
using namespace std;

int main(){
	
	int *p=new int;
	cout<<"Address random heap section--->"<<p<<endl;
	*p=90;
	*p=*p+10;
	cout<<"Data fetch dereference--->"<<*p<<endl;

	delete(p);
	
}


