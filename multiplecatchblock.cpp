#include<iostream>
using namespace std;

//multiple catch block

int main(){
	int n;
	string s="This is just an example";
	cout<<"Enter number:";
	cin>>n;
	try{
		if(n<0){	
			throw n;
			}
			cout<<"part 1->valid number->operation\n";
			//throw 8.9;
			throw s;
			
	}
	catch (int n){
		cout<<"Number should be positive \n";
		cout<<"u entered negetive number"<<n<<endl;
	}
	catch(double n){
		cout<<n<<"is double value";
	}
	catch(string n){
		cout<<n<<"is string value";
	}
	catch(...){     //catch all
		cout<<"All exception handle by it";
	}
}


