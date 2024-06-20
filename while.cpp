#include<iostream>
using namespace std;

int main(){
//	int i=1;
//	while(i<=10){
//		cout<<i<<endl;
//		i++;
//	}
//}
///Q---->2
//	while(1){
//		cout<<"infinite loop";
//	}
//}
////////or
//	int i=1;
//	while(i<=10){
//		cout<<i<<endl;
//	}
//}
//Q----->3
//	char ch;
//	while(1){
//		cout<<"infinite loop";
//		cout<<"do u wnt to exit, type 'n' for exit";
//		cin>>ch;
//		if(ch=='n')
//			break;//exit point
//	}
//}
//whenever we use infinite loop, it has maximum one exit point(break statement)
//	int a,b;
//	string choice;
//	
//	while(1){
//		cout<<"enter two numbers:";
//		cin>>a>>b;
//		cout<<"addition:"<<a+b<<endl;
//		cout<<"do u wnt to exit, type 'exit' for exit otherwise any character";
//		cin>>choice;
//		if(choice=="exit"){//ch=='n'
//			cout<<"thankyou for using our service....";
//			break;//exit point
//		}
//	}
//}
//Q--->
	int num;
		cout<<"enter a number:";
		cin>>num;
		while(num%10!=0){//50%10==0
			cout<<"enter a number:";
			cin>>num;
		}
	}

