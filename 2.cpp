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

using namespace B;
cout<<name;
return 0;
}
