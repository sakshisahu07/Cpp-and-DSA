#include<iostream>
using namespace std;

int main(){
//	int num;
//	cout<<"Enter a number:";
//	cin>>num;
//	if(num%2==0)
//	cout<<"number is even:";
//	else
//	cout<<"number is odd:";
//}
//	int a,b,temp;
//	cout<<"Enter the value of a and b:";
//	cin>>a>>b;
//	cout<<"before swapping";
//	cout<<"a:"<<a<<"b:"<<b<<endl;
//	temp=a;
//	a=b;
//	b=temp;
//	cout<<"after swapping:";
//	cout<<"a:"<<a<<"b"<<b<<endl;
//}
//armstrong
//	int num,last,temp,sum=0;
//	cout<<"Enter the number:"; //370
//	cin>>num;
//	temp=num;
//	for(int i=1;i<=num;i++){   // while(num>0)-->3
//		last=num%10;           // for--->370
//		sum=sum+(last*last*last);
//		num=num/10;
//	}
//	if(temp==sum)
//	cout<<"number is armstrong:";
//	else
//	cout<<"number is not armstrong:";
//}
//palindrome
//int num,last,temp,sum=0;
//cout<<"enter number:";
//cin>>num;
//temp=num;
//while(num>0){
//	last=num%10;
//	sum=sum*10+last;
//	num=num/10;
//}
//if(temp==sum)
//cout<<"number is palindrome:";
//else
//cout<<"number is not palindrome:";
//}
//prime number
int num;
cin>>num;
int random=0;
for(int i=2;i<=num/2;i++){
	if(num%i==0){
		cout<<"not a prime number:";
		random=1;
		break;
	}
}
if(random==0)
cout<<"prime number";
}
//	


	
