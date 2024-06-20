#include<iostream>
using namespace std;

int main(){
//	cout<<"introduction to goto\n";
//goto sakshi;
//	 for(int i=1;i<=10;i++){
//	 	cout<<i<<endl;
//	 }
//	 sakshi :{
//	 cout<<"label of goto\n";
//	 }
//	 cout<<"end of goto";
//}

//with the help of goto statement create a table
//	int i=1,n,a;
//	cout<<"Enter the limit:";
//	cin>>n;
//	cout<<"Enter the table number:";
//	cin>>a;
//	abc:
//		cout<<a<<"*"<<i<<"="<<i<<"\n";
//		i++;
//		if(i<=n)
//		{
//			goto abc;
//		}
//	}
	//or
	int num, i=1;
	cout<<"enter number:";
	cin>>num;
	  
	table:{
		cout<<num<<"*"<<i<<"="<<num*i<<endl;
		i++;
		if(i==11)
			goto exit;
		}
		goto table;
		exit:{
		cout<<"thankyou";
		}
	}
	
