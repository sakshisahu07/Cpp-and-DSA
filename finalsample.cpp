#include <iostream>

using namespace std;
//
//int main() {
//    int Arr[5] = {23, 44, 5, 6, 7};
//    int index;
//
//    cout << "Enter an index to display the number at that position: ";
//    cin >> index;
//
//    try {
//        if (index < 0 || index >= 5) {
//            throw "Index out of range";
//        }
//        cout << "Number at index " << index << ":" << Arr[index] << endl;
//    } catch (const char* msg) {
//        cout << "Error: " << msg << endl;
//    }
//    
//    return 0;
//}

//======================Ques 1st==============================
//
//int main() {
//    int n;
//
//    cout << "Enter a number : ";
//    cin >> n;
//
//    //cout << "Output: ";
//    for (int i = n; i >= 1; i--) {
//        if (i % 5 != 0) {
//            cout << i << " ";
//        }
//    }
//    cout << endl;
//
//    return 0;
//}

//====================Ques 2nd=====================================
//class Time{
//	int hour;
//	int mins;
//	public:
//	Time(int h,int m){
//			hour=h;
//			mins=m;
//		}
//};
//int main(){
//	
//}
//int main(){
//	int n;
//	cout<<"Enter number:";
//	cin>>n;
//	
//	for(int i=n;i>=1;i--){
//		if(i%5!=0){
//			cout<<i<<" ";
//		}
//	}
//	cout<<endl;
//	return 0;
//}
//======================ques 4th====================
//void AddEnd(int A[],int size){
//
//int sum=0;
//	for(int i=0;i<size;i++){
//		if(A[i]%10==4){
//		sum=sum+A[i];
//	}
//}
//cout<<sum;
//}
//int main(){
//	int Arr[4]={24,16,14,10};
//	AddEnd(Arr,4);
//}

//=====================que 5th================================
//int main(){
//	
//	for(int i=0;i<7;i++){
//		for(int j=0;j<7;j++){
//			if(j==0 || i==3 || i==6 || i==0){
//				cout<<"*";
//			}
//		}
//		cout<<endl;
//	}
//}
//=======================ques 7th==========================
//string pali(string a){
//	string st="";
//	
//	for(int i=a.size()-1;i>=0;i--){
//		st.push_back(a[i]);
//	}
//	if(st==a)
//		return "true";
//	else
//		return "false";
//}
//int main(){
//	string s="mom";
//	string result=pali(s);
//	cout<<result;
//}
//==========================operator overload===========================
//class Student{
//	int marks;
//public:
//	Student(int a){
//		marks=a;
//	}
//	void display(){
//		cout<<"Marks"<<marks<<endl;
//	}
//	Student operator + (Student obj){
//		Student temp(0);
//		temp.marks=marks+obj.marks;
//		return temp;
//	}
//};
//int main(){
//	Student s1(1),s2(2),s3(2),s4(1);
//	Student result = s1+s2+s3+s4;
//	result.display();
//}
//
//class Time{
//	int hour;
//	int mins;
//public:
//	Time(int h,int m){
//		hour=h;
//		mins=m;
//	}
//	
//	void convert_mins(){
//		cout<<"Total hour"<<hour<<"Total mins"<<mins<<endl;
//		cout<<"Equivalent mins:"<<60*hour+mins<<endl;
//	}
//	
//	Time operator + (Time obj){
//		Time temp(0,0);
//		int remain_hour=(mins+obj.mins)/60;  //obj.hours = t2.hours
//		temp.hour=(hour+obj.hour)+remain_hour; //hour=23; t1.hour=23
//		temp.mins=(mins+obj.mins)%60;
//		return temp;
//	}
//	void display(){
//		cout<<"Total hour"<<hour<<"Total mins"<<mins<<endl;
//	}
//};
//
//int main(){
//	Time t1(2,20),t2(3,30);
//	Time result=t1+t2;
//	result.display();
//}

class METROPOLIS{
	int Mcode,Mpop;
	string MName;
	double Area,PopDens;
	 
	 void CalDen(){
	 	PopDens=Mpop/Area;
	 	cout<<"The population Density:"<<PopDens<<endl;
	 }
	 public:
	 void Enter(){
	 	cout<<"Enter code";
	 	cin>>Mcode;
	 	cout<<"Enter name";
	 	cin>>MName;
	 	cout<<"Enter pop";
	 	cin>>Mpop;
	 	cout<<"Enter Area";
	 	cin>>Area;
	 	CalDen();
	 }
	 
	 void ViewAll(){
	 	cout<<"code"<<Mcode<<endl;
	 	cout<<"Name"<<MName<<endl;
	 	cout<<"Mpop"<<Mpop<<endl;
	 	cout<<"Area"<<Area<<endl;
	 	cout<<"Density"<<PopDens;
	 	
	 	if(PopDens>12000){
	 		cout<<"Highly populated Area";
		 }
	 }
};
int main(){
	METROPOLIS a;
	a.Enter();
	a.ViewAll();
}
//void AddEnd(int A[],int size){
//int sum=0;
//for(int i=0;i<size;i++){
//	if(A[i]%10==4){
//		sum=sum+A[i];
//	}
//}
//cout<<sum;
//}
//int main(){
//	int ar[4] = {24,16,14,10};
//	AddEnd(ar,4);
//}

//void AddEnd(int A[],int size){
//	int sum=0;
//	for(int i=0;i<size;i++){
//		if(A[i]%10==4){
//			sum=sum+A[i];
//		}
//	}
//	cout<<sum;
//}
//int main(){
//	int ar[4]={12,16,14,34};
//	AddEnd(ar,4);
//}


//void EvenNum(int A[],int size){
//	for(int i=0;i<size;i++){
//		if(A[i]%2==0)
//		cout<<A[i]<<"even number;
//	}
//
//}
//
//int main(){
//	int ar[5]={12,13,14,15,16};
//	EvenNum(ar,5);
//}
//int main(){
//	int arr[]={23,44,5,6,7};
//	int n;
//	cout<<"Enter n number";
//	cin>>n;
//	
//	try{
//		if(n>5){
//			throw n;
//		}
//		cout<<arr[];
//	}
//	catch(int a){
//		cout<<"index number greator";
//	}
//}
