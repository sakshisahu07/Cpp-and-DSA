#include<iostream>
using namespace std;

int main(){
	double cost,discount;
	cout<<"enter cost  price:";//1500
	cin>>cost;
	
	if(cost<=2000 && cost>0){
		discount=cost*(5/100.0);
		cout<<"discount:"<<discount<<endl;
		cout<<"amunt paid:"<<cost-discount;
	}
	else if(cost>2000 && cost<=5000){
		discount=cost*(25/100.0);
		cout<<"discount:"<<discount<<endl;
		cout<<"amunt paid:"<<cost-discount;
	}
	else if(cost>5000 && cost<=10000){
		discount=cost*(35/100.0);
		cout<<"discount:"<<discount<<endl;
		cout<<"amunt paid:"<<cost-discount;
	}
	else if(cost>10000){
		discount=cost*(50/100.0);
		cout<<"discount:"<<discount<<endl;
		cout<<"amunt paid:"<<cost-discount;
	}
	else{//negetive(optional)
	cout<<"invalid";
	}
}
