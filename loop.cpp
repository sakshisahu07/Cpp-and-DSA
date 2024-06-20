//#include<iostream>
//using namespace std;
//
//int main()
//{
//	for(int i=1;i<=10;i++){
//		cout<<i<<endl;
//	}
//	
//}
//reverse order
//#include <iostream
//using namespace std;
//
//int main(){
//	for(int i=10;i>=1;i--){
//		cout<<i<<endl;
//	}
//}
//for loop even or odd
#include<iostream>
using namespace std;
 int main(){
 	int r,n,sumO=0,sumE=0;
 	cout<<"enter a range:";
 	cin>>r;
 	for(int i=1;i<=r;i++){
 		cout<<"enter a number:";
 		cin>>n;
 		if(n%2==0){
 			sumE=sumE+n;
		 }
		 else{
		 	sumO=sumO+n;
		 }
	 }
 
 		cout<<"sum of even no:"<<sumE<<endl;
 		cout<<"sum of odd no:"<<sumO;
 	}

//    int n,sum=0;
//    cout<<"enter range:";
//    cin>>n;//4
//    
//    for(int i=1;i<=n;i++){//1<=4,2<=4,3<=4,4<=4,5<=4
//    	
//    	if(i==n)
//    		cout<<i<<"=";
//    	else
//    		cout<<i<<"+";
//    	sum=sum+i;//sum=0+1=1,sum=1+2=3,sum=3+3=6
//		}
//		cout<<sum;
//	}
//		int n,fact=1;//fact=1
//		cout<<"enter number:";
//		cin>>n;//5
//		cout<<n<<"!=";//formatting
//		
//		for(int i=n;i>=1;i--){
//			if(i==1)
//				cout<<i<<"=";
//			else
//				cout<<i<<"*";
//			
//			fact=fact*i;//fact=1*5=5,fact=5*4=20,fact=20*3=60,fact=60*2=120,fact=120*1=120
//			
//		}
//    cout<<fact;
//}
//fomatting loop----(1+1)+(2+2)+(3+3)+(4+4)+(5+5)---------(n+n)
//		int num2, sum2=0;
//		cout<<"enter a number:";
//		cin>>num2;
//		for(int i=1; i<=num2; i++){
//			if(i==num2)
//				cout<<"("<<i<<"+"<<i<<")"<<"=";
//			else 
//				cout<<"("<<i<<"+"<<i<<")"<<"+";
//			sum2=sum2+i+i;
//		}
//		cout<<sum2<<endl;
//	}
//Q------>1-1/2+1/3-1/4+1/5-1/6----------
//		int n;
//		double sum=0;
//		cout<<"enter range:";
//		cin>>n;
//		
//		for(int i=1;i<=n;i++){
//			if(i%2!=0)
//			{
//				sum=sum+(1.0/i);
//				if(i==n)
//					cout<<1<<"/"<<i<<"=";
//				else
//					cout<<1<<"/"<<i<<"-";
//			}
//			else
//			{
//				sum=sum-(1.0/i);
//				if(i==n)
//					cout<<1<<"/"<<i<<"=";
//				else
//					cout<<1<<"/"<<i<<"+";
//			}
//	}
//	cout<<sum;
//}
//	/
	//1^2+2^2+3^3+4^4=
//		int num2,sum2=0;
//	cout<<"enter a number:";
//		cin>>num2;
//		for(int i=1; i<=num2; i++){
//			if(i==num2)
//			 cout<<"("<<i<<"^"<<i<<")"<<"=";
//			else cout<<"("<<i<<"^"<<i<<")"<<"+";
//			 sum2=sum2+i+i;
//		}
//		cout<<sum2<<endl;
//	}
	//(1*1)+(2*2)+(3*3)+(4*4)=
//		int num2,sum2=0;
//	cout<<"enter a number:";
//		cin>>num2;
//		for(int i=1; i<=num2; i++){
//			if(i==num2)
//			 cout<<"("<<i<<"*"<<i<<")"<<"=";
//			else cout<<"("<<i<<"*"<<i<<")"<<"+";
//			 sum2=sum2+i*i;
//		}
//		cout<<sum2<<endl;
//	}
//print all alphabet a to z
//	char c;
//	cout<<"enter any alphabet:";
//	cin>>c;
//	for(c='A';c<='Z';c++){
//		cout<<c<<" ";
//	}
//}
	//reverse
	
//	char c;
//	cout<<"enter any alphabet:";
//	cin>>c;
//	for(c='Z';c>='A';c--){
//		cout<<c<<" ";
//	}
//}
//	int num;
//	cout<<"Enter number";
//	cin>>num;
//	for(int i=0;i<num;i++){
//		cout<<
//	}
	int num2,sum2=0;
	cout<<"Enter number:";
	cin>>num2;
	for(int i=1;i<num2;i++){
		if(i==num2)
		cout<<"("<<i<<"*"<<i<<")"<<"=";
		else
		cout<<"("<<i<<"*"<<i<<")"<<"+";
	}
	sum2=sum2+i+i;
	cout<<sum2<<endl;
}
