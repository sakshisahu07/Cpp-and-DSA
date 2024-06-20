
#include<iostream>
using namespace std;

int main(){
//	int ar[2][3]={1,2,3,4,5,6};
//	cout<<ar[1][1]<<endl;//5
//	cout<<ar[0][2]<<endl;//3
//	int arr[3][2][3]={1,2,3,4,5,6,7,8,9,10,11,12};
//	cout<<arr[0][1][1]<<endl;//5
//	cout<<arr[0][1][2]<<endl;//6
//	cout<<arr[0][1][0]<<endl;//4
//}
//	WAP to create a 2D Array dynamicaly
//	int row,column;
//	cout<<"Enter row and column:";//r-->2   c--->3
//	cin>>row>>column;
//	int a[row][column];
//	
//	for(int i=0;i<row;i++){//i=1
//		for(int j=0;j<column;j++){//j=0,1,2
//			cout<<"Enter the value for index:"<<i<<j<<":";
//			cin>>a[i][j];
//		}
//	}
//	for(int i=0;i<row;i++){//i=1
//		for(int j=0;j<column;j++){//j=0,1,2
//			cout<<"Enter the value for index:"<<i<<j<<":"<<a[i][j]<<endl;//3
//		}
//	}
//	cout<<"Matrix representation:";
//	for(int i=0;i<row;i++){
//		for(int j=0;j<column;j++){
//			cout<<a[i][j]<<" ";//3
//		}
//		cout<<endl;
//	}
//}
//highest second highest
//	int a[6]={23,44,-5,66,8,10};
//	//high 66      second high 44
//	int high,shigh;
//	high=a[0];
//	shigh=a[0];
//	
//	for(int i=1;i<6;i++){
//		if(a[i]>high)//23>44 //44>-5 //-5>66//66>8 //10>66
//		high=a[i];//44 //66
//		
//	}
//	for(int i=1;i<6;i++){
//		if(a[i]>shigh && a[i]<high)//44>23 && 44<66 true //-5>66 && -5<66
//		shigh=a[i];
//		
//	}
//	cout<<"high"<<high;
//	cout<<"shigh"<<shigh;
//}
//submission of row
//	int a[3][3]={{1,2,3},{4,5,6},{7,8,9}},sum;
//	for(int i=0;i<3;i++){
//		sum=0;
//		for(int j=0;j<3;j++){
//			cout<<a[i][j]<<" ";
//			sum=sum+a[i][j];
//		}
//		cout<<" = "<<sum<<endl;
//	}
//}
//submission of  column
//	int a[3][3]={{1,2,3},{4,5,6},{7,8,9}},sum;
//	for(int i=0;i<3;i++){
//		for(int j=0;j<3;j++){
//			cout<<a[i][j]<<" ";
//		}
//		cout<<endl;
//	}
//	for(int i=0;i<3;i++){//i=0
//		sum=0;
//		for(int j=0;j<3;j++){//j=2
//								//sum=sum+a[0][0]
//			sum=sum+a[j][i];   //sum=sum+a[1][0]
//		}                      //sum=sum+a[2][0]
//		cout<<sum<<" ";
//	}
//}
//	diagonal
//1  0  0
//0  5  0
//0  0  9
//	int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
//	for(int i=0;i<3;i++){
//		for(int j=0;j<3;j++){
//			if(i==j)
//			cout<<a[i][j];
//			else
//			cout<<"0";
//			
//		}
//		cout<<endl;
//	}
//}
//	int a[3][3]={{1,2,3},{4,5,6},{7,8,9}},sum;
//	for(int i=0;i<3;i++){
//		sum=0;
//		for (int j=0;j<3;j++){
//			cout<<a[i][j]<<" ";
//			sum=sum+a[i][j];
//		}
//		cout<<endl;
//	}
//}
////diagonal
//	int a[3][3]={{23,4,6},{22,3,9},{1,2,1}};
//		for(int i=0;i<3;i++){
//			for(int j=0;j<3;j++){
//	
//	
//	if(i==j)
//	cout<<a[i][j]<<"  ";
//	else
//	cout<<"0"<<"  ";
//}
//cout<<endl;
//}
//}
//23  4  6		23  4  6
//22  3  9---->     3  9
//1   2  1			   1

	int row,column;
	cout<<"Enter row and column:";
	cin>>row>>column;
	int a[3][3]={{23,4,6},{22,3,9},{1,2,1}};
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			if(i<=j)
				cout<<a[i][j];
			else
				cout<<" ";
			}
			cout<<endl ;
		}
	}
