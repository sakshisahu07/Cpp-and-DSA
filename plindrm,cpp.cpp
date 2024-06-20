#include<iostream>
using namespace std;

int main(){
//	int last,num,sum;
//	for(int i=200;i<=900;i++){
//		num=i;
//		sum=0;
//		while(num>0){
//			last=num%10;
//			sum=sum*10+last;
//			num=num/10;
//		}
//		if(i==sum)
//		cout<<i<<"  ";
//	}
//}

//Armstrong prog.
//	int last,num,sum;
//	for(int i=200;i<=900;i++){
//		num=i;
//		sum=0;
//		while(num>0){
//			last=num%10;
//			sum=sum+last*last*last;
//			num=num/10;	
//		}
//		if(i==sum)
//		cout<<i<<"  ";
//	}
//}
//prime number prog.
	int last, num, sum;
	for(int i=200;i<=900;i++){
		num=i;
		sum=0;
		while(num>0){
			last=num%10;
			sum=sum*10+last;
			num=num/10;
		}
		if(sum==i)
		cout<<i<<" ";
	}
}
	
	

