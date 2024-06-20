#include<iostream>
using namespace std;

int main(){
	int week_num;
	cout<<"enter week number:";
	cin>>week_num;
	
	switch(week_num){
		case 1: cout<<"monday";
		break;
		case 2: cout<<"tuesday";
		break;
		case 3: cout<<"wednesday";
		break;
		case 4: cout<<"thrusday";
		break;
		case 5: cout<<"friday";
		break;
		case 6: cout<<"saturday";
		break;
		case 7: cout<<"sunday";
		break;
		default: cout<<"invalid choice:";
	}
#}
