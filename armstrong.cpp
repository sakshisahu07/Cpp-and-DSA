
#include<iostream>
using namespace std;

//armstrong number
//371--->3^3+7^3+1^3=371
//1634-->
int main(){
	int num,temp,sum=0,last;
	cout<<"enter last number:";//371
	cin>>num;
	temp=num;//371
	
	while(num>0){
		last=num%10;
		sum=sum+(last*last*last);
		num=num/10;
		
	}
	if(temp==sum)
	cout<<"armstrong";
	else
	cout<<"no it is not";
}
//Q--->152
//	int num,temp,sum=0,last;
//	cout<<"enter a number:";//152
//	cin>>num;
//	temp=num;//152
//	
//	while(num>0){
//		last=num%10;
//		sum=sum+(last*last*last);
//		num=num/10;
//		
//	}
//	if(temp==sum)
//	cout<<"armstrong";
//	else
//	cout<<"no it is not";
//}
//		
//	}
//Q--->wap to determine to add individual digit of a number n.
//	int num,temp,sum=0,last;
//	cout<<"enter a number:";
//	cin>>num;
//	temp=num;
//	
//	while(num>0){
//		last=num%10;
//		sum=sum+last;
//		num=num/10;
//	}
//	cout<<sum;
//}

//Q--->write a program to check number is palindrome or not.
//		int num,temp,sum=0,r;
//		cout<<"enter the number:";
//		cin>>num;
//		temp=num;
//		
//		while(num>0){
//			r=num%10;
//			sum=(sum*10)+r;
//			num=num/10;
//		}
//		if(temp==sum)
//			cout<<"Number is palindrome:";
//		else
//			cout<<"Number is not palindrome:";
//			return 0;
//		}
//Q--->prime number
//	int num,i=2;//control variable
//	cout<<"enter number:";//15
//	cin>>num;
//	int flag=0;
//	while(i<=num/2){//2<=7 3<=7 4<=7 5<=7 6<=7 7<=7
//		if(num%i==0){//15%2==0,15%3==0,15%4==0
//			flag=1;
//			break;
//		}
//		i++;
//		
//	}
//	if(flag==0)
//		cout<<"it is a prime number:";
//	else
//		cout<<"no it is not a prime number:";
//}
//	int num ;
//	cout<<"enter num";
//	cin>>num;
//	
//	for(int i=1;i<=10;i++){
//		cout<<i<<"*"<<num<<"="<<i*num<<endl;
//	}
//}

