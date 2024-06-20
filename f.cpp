#include<iostream>
using namespace std;

int main()
{
	int a=50,b;
	// b=++a; // increment the value of a by 1
			//then asign it to b
			//a=51-->b=a-->b=51
			
	b=a++; //first assign the value of a to b 
		//then increment the value of a by 1
		//b=a-->b=50-->a=51
	cout<<"a:"<<a<<"b:"<<b;
	return 0;
}
