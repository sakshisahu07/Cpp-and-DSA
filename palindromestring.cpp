#include<iostream>
using namespace std;

//========================palindrome string=================================
//wap to find out the palindrome string in the array str.

//str={"mom" , "apple" , "nitin" , "banana" , "ww"}

//condition:
//1)palindrome string 
//2)size of string greator then 2
//"mom nitin"
int main(){
//	string st="";
//	st.push_back('a');
//	cout<<st<<" It's size "<<st.size()<<endl;
//	st.push_back('b');
//	cout<<st<<" It's size "<<st.size()<<endl;

//=====================pushback===================

//	string  s="mom";
//	string st="";
//	for(int i=s.size()-1;i>=0;i--){
//		st.push_back(s[i]);
//	}
//	cout<<st<<endl;
//	if(st==s)
//		cout<<"Palindrome";
//	else
//		cout<<"Not a palindrome";
//}

//===========================palindrome string =======================

//	string str[5]={"mom","apple","nitin","banana","ww"};
//	string final="";
//	for(int j=0;j<5;j++){
//		string temp=str[j],str1="";  //"mom"
//		
//			for(int i=temp.size()-1;i>=0;i--){
//				str1.push_back(temp[i]);
//				
//			 }
//			if(temp==str1 && temp.size()>2)
//			final=final+temp+" ";
//	}
//	cout<<final<<endl;
//}

	string str[5]={"mom","apple","nitin","banana","ww"};
	string final="";
	for(int j=0;j<5;j++){
		string temp=str[j],str1="";
		
			for(int i=temp.size()-1;i>=0;i--){
				str1.push_back(temp[i]);
			}
			if(temp==str1 && temp.size()>2)
			final=final+temp+" ";
	}
	cout<<final<<endl;
}
