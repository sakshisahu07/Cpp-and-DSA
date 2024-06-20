#include<iostream>
using namespace std;

//int main(){
//	for(int i=1;i<=9;i++){
//		for(int j=1;j<=9;j++){
//			if(i==5 || j==5 || (i==1 && j>=5) || (i==9 && j<=5) || ( i<=5 && j==1) || (i>=5 && j==9 )){
//				cout<<"*";
//			}
//			else{
//				cout<<" ";
//			}
//		}
//		
//		cout<<endl;
//	}
//}

void f(int a[],int n,int s){
	int count=0;
	for(int i=0;i<n;i++){
		if(a[i]==s){
			count++;
		}
	}
	cout<<count;
	
}
int main(){
	int s;
	int arr[]={12,2,23,34,12};
	cout<<"Enter number";
	cin>>s;
	int size=sizeof(arr)/sizeof(arr[0]);
	f(arr,size,s);
}
