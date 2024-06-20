#include<iostream>
using namespace std;
//3rd variable
int main()
{
//	int a,b,temp;
//	cout<<"enter a and b number:";
//	cin>>a>>b; //11    22
//	cout<<"before swapping:\n";
//	cout<<"a:"<<a<<"b:"<<b<<endl;
//	
//	temp=a;//11
//	a=b;//22
//	b=temp;//11
//	
//	cout<<"after swapping:\n";
//	cout<<"a:"<<a<<"b:"<<b<<endl;
//}
//{
//	int a,b;
//	cout<<"enter a and b number:";
//	cin>>a>>b; //22    33
//	cout<<"before swapping:\n";
//	cout<<"a:"<<a<<"b:"<<b<<endl;
//	
//     a=a+b;//55
//     b=a-b;//55-33=22
//     a=a-b;//55-22=33
//	
//	cout<<"after swapping:\n";
//	cout<<"a:"<<a<<"b:"<<b<<endl;
//}
	int a,b,temp;
	cout<<"Enter the value of a and b:";
	cin>>a>>b;
	cout<<"before swapping:\n";
	cout<<"a:"<<a<<"b:"<<b<<endl;
	temp=a;
	a=b;
	b=temp;
	
	cout<<"after swapping:";
	cout<<"a:"<<a<<"b:"<<b<<endl;
}

