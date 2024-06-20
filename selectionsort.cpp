#include<iostream>
using namespace std;
//
//void selection_sort(int a[] ,int size){
//	int index,temp;
//	for(int i=0;i<size-1;i++){
//		index=i;
//		for(int j=i+1;j<size;j++){
//		
//		if(a[index]>a[j]){
//			index=j;
//		}
//	}
//		if(i!=index){
//		temp=a[i];
//		a[i]=a[index];
//		a[index]=temp;
//     	}
//	}
//
//}
//void print(int A[],int n){
//	for(int i=0;i<n;i++){
//		cout<<A[i]<<" ";
//	}
//		}
//	int main(){
//		int a[5]={5,2,4,1,3};
//		print (a,5);
//		cout<<endl;
//		selection_sort(a,5);
//		print(a,5);
//	}
//	
//	
//	
//	
//	
//	
//	
//	
//	
//	
//	
//	
//	
//	
//	
//	void selection_sort(int a[],int size){
//		int index,temp
//		for(int i=0;i<size-1;i++){
//			index=i;
//			for(int j=i+1;j<size;j++){
//				if(a[index]>a[j]){
//					index=j;
//				}
//			}
//			if(i!=index){
//				temp=a[i];
//				a[i]=a[index];
//				a[index]=temp;
//			}
//		}
//	}

















void selection_sort(int a[],int size){
	int index,temp;
	for(int i=0;i<size-1;i++){
		index=i;
		for(int j=i+1;j<size;j++){
			if(a[index]>a[j]){
				index=j;
			}
		}
		if(i!=index){
			temp=a[i];
			a[i]=a[index];
			a[index]=temp;
		}
	}
}
void print(int A[],int n){
	for(int i=0;i<n;i++){
		cout<<A[i]<<" ";
	}
}
int main(){
	int a[5]={5,4,7,9,3};
	print(a,5);
	cout<<endl;
	selection_sort(a,5);
	print(a,5);
}
	
	
	
	
