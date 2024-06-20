#include<iostream>
#include<fstream>
// ifstream, ofstream,fstream
using namespace std;

int main(){
	ofstream obj1;
	obj1.open("C:\\Users\\om  sai\\Documents\\filehandling\\xyz.txt");
	obj1<<"This is my content\n";
	obj1<<"We just create a file:";
	obj1.close();
}


