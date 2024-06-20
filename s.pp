#include<iostream>
using namespace std;
namespace A
{
	string name="ram";
}
namespace B
{ 
	string name="shyam";
}
int main()
{
	using namespace A;
	cout<<name;
	return 0;
	
}
