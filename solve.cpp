//even odd
#include<iostream>
using namespace std;

int main(){
//	int num;
//	cout<<"Enter a number:";
//	cin>>num;
//	if(num%2==0){
//		cout<<"number is even:";
//	}
//	else{
//		cout<<"number is odd:";
//	}
//	}
//leap year
//	int year;
//	cout<<"Enter test year:";
//	cin>>year;
//	if(year%4==0 && year%100!=0 || year%400==0 )
//		cout<<"year is a leap leap:";
//	else
//		cout<<"year is not a leap year:";
//}
//switch week number
//	int week_num;
//	cout<<"Enter week number:";
//	cin>>week_num;
//	
//	switch (week_num){
//		case 1: cout<<"Monday";
//			break;
//		case 2: cout<<"Tuesday";
//			break;
//		case 3: cout<<"Wednesday";
//			break;
//		case 4: cout<<"thrusday";
//			break;
//		case 5: cout<<"Friday";
//			break;
//		case 6: cout<<"Saturday";
//			break;
//		case 7: cout<<"Sunday";
//			break;
//		default: cout<<"invalid choice:";
//	}
//}
//nesting
//	int num;
//	cout<<"Enter a number:";
//	cin>>num;
//	if(num%7==0){
//		cout<<"number is divisible by 7\n:";
//		if(num%2==0)
//		cout<<"num is even:";
//		else
//		cout<<"num is odd";
//	}
//	else{
//		cout<<"number is not divisible by 7\n:";
//	}
//	}
//loop
//	for(int i=1;i<=10;i++){
//		cout<<i<<endl;
//	}
//}
//reverse
//	for(int i=10;i>=1;i--){
//		cout<<i<<endl;
//	}
//}
//display a table
//	int num;
//	cout<<"Enter a number";
//	cin>>num;
//	for(int i=1;i<=10;i++){
//		cout<<2<<"*"<<i<<"="<<num*i<<endl;
//	}
//}
//display alphabet
//	char c;
//	cout<<"Enter any alphabet:";
//	cin>>c;
//	for( c='a';c<='z';c++){
//		cout<<c<<endl;
//	}
//}
//reverse
//	char c;
//	cout<<"Enter any alphabet:";
//	cin>>c;
//	for(c='z';c>='a';c--){
//		cout<<c<<" ";
//	}
//}
//	swapping
//	int a,b,temp;
//	cout<<"Enter the value of a and b:";
//	cin>>a>>b;
//	cout<<"before  swapping\n:";
//	cout<<"a:"<<a<<"b:"<<b<<endl;
//	
//
//		temp=a;
//		a=b;
//		b=temp;
//	cout<<"After swapping\n:";
//	cout<<"a:"<<a<<"b:"<<b<<endl;
//}
//print alphabet except vowel
//	for (char ch='A'; ch<='Z';ch++){
//	if (ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
//	continue;
//	cout<<ch<<" ";
//}
//}
//vowel//consonent
//	char ch;
//	cout<<"Enter a character:";
//	cin>>ch;
//	if(ch>'A' && ch<='Z'){
//		if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
//		cout<<"vowels";
//		else
//		cout<<"consonent";
//	}
//}
//HCF
//	int n1,n2,small,msg=0;
//	cout<<"Enter two numbers";
//	cin>>n1>>n2;
//	n1>n2? small=n2: small=n1;
//	
//	for(int i=small;i>=2;i--){
//		if(n1%i==0 && n2%i==0){
//			cout<<"HCF:"<<i;
//			msg=1;
//			break;
//		}
//	}
//	if(msg==0)
//		cout<<"HCF is not possible:";
//	}
//armstrong
//	int last,num,sum;
//	for(int i=200;i<=900;i++){
//	
//	num=i;
//	sum=0;
//	while(num>0){
//		last=num%10;
//		sum=sum+last*last*last;
//		num=num/10;
//	}
//		if(i==sum)
//			cout<<i<<" ";
//		}
//	}
//============(1 to 100) even no. add odd
//	int i=1;
//	while(i<=100){
//		if(i%2==0){
//		}
//		cout<<i<<endl;
//		else{
//			cout<<i<<endl;
//		}
//		i++;
//	}
//}
//===========sum of all natural number
//	int sum=0,num;
//	cout<<"Enter range:";
//	cin>>num;
//	int i=1;
//	while(i<=num){
//		sum=sum+i;
//		i++;
//	}
//	cout<<sum;
//	}
//===========sum of even & odd
//	int sumE=0,sumO=0,num;
//	cout<<"enter range:";
//	cin>>num;
//	int i=0;
//	while(i<=num){
//		if(num%2==0){
//		sumE=sumE+i;
//	}
//	else{
//		sumO=sumO+i;
//	}
//	}
//}
//reverse a digit
//2345------5432
	int num,rem,rev_n=0;
	cout<<"Enter number:";
	cin>>num;
	while(num!=0){
		rem=num%10;
		rev_n=rev_n*10+rem;
		num=num/10;
	}
	cout<<"reverse of a number:"<<rev_n;
}
//

	
	
	

