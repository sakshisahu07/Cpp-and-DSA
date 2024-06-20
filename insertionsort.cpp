#include<iostream>
using namespace std;

//void insertion_sort(int a[],int size){
//	int key,j;
//	for(int i=1;i<size;i++){
//		key=a[i];
//		j=i-1;
//		while(j>=0 && a[j]>key){
//			a[j+1]=a[j];
//			j--;
//		}
//		j++;
//		a[j]=key;
//	}
//}
//int main(){
//	int a[6]={23,2,45,11,8,21};
//	for(int i=0;i<6;i++)
//		cout<<a[i]<<" ";
//	cout<<endl;
//	insertion_sort(a,6);
//	
//	for(int i=0;i<6;i++)
//		cout<<a[i]<<" ";
//	
//}

//void insertion_sort(int a[],int size){
//	int key,j;
//	for(int i=1;i<size;i++){
//		key=a[i];
//		j=i-1;
//		while(j>=0 && a[j]>key){
//			a[j+1]=a[j];
//			j--;
//		}
//		j++;
//		a[j]=key;
//	}
//}
//void print(int A[],int n){
//	for(int i=0;i<n;i++){
//		cout<<A[i]<<" ";
//	}
//}
// 
//int main(){
//	int a[5]= {9,7,8,6,5};
//	print(a,5);
//	cout<<endl;
//	insertion_sort(a,5);
//	print(a,5);
//}












//
//
//
//void insertion_sort(int a[],int size){
//	int key,j;
//	for(int i=1;i<size;i++){
//		key=a[i];
//		j=i-1;
//	while(j>=0 && a[j]>key){
//		a[j+1]=a[j];
//		j--;
//	}
//	j++;
//	a[j]=key;
//	}
//}
//void print(int A[],int n){
//	for(int i=0;i<n;i++){
//		cout<<A[i]<<" ";
//	}
//}
//int main(){
//	int a[5]={12,2,8,1,7};
//	print(a,5);
//	cout<<endl;
//	insertion_sort(a,5);
//	print(a,5);
//}





















//
//void insertion_sort(int a[],int size){
//	int key,j;
//	for(int i=1;i<size;i++){
//		key=a[i];
//		j=i-1;
//	while(j>=0 && a[j]>key){
//		a[j+1]=a[j];
//		j--;
//	}
//	j++;
//	}
//	a[j]=key;
//}
//void print(int A[],int n){
//	for(int i=0;i<n;i++){
//		cout<<A[i]<<" ";
//	}
//}
//int main(){
//	int a[5]={5,4,3,2,1};
//	print(a,5);
//	cout<<endl;
//	insertion_sort(a,5);
//	print(a,5);
//}











void insertion_sort(int A[],int size){
	int key,j;
	for(int i=1;i<size;i){
		key=A[i];
		j=i-1;
	while(j>=0 && A[j]>key){
		A[j+1]=A[j];
		j--;
	}
	j++;
	}
	A[j]=key;
}




