				/*	Poniters and address of operator  
				Aditya	Tiwari	oct 23 2019*/

#include<iostream>
using namespace std;

int main(void){
		int i = 5;
		int *ptr;
		ptr = &i;
		cout<<"\nAddress of variable 'i':"<<&i;
		cout<<"\nAddress in 'ptr':"<<ptr;
		cout<<"\nValue present at ptr("<<ptr<<"):"<<*ptr<<endl;
		cout<<" pointer variable ptr stores address of variable i and if we use *ptr then it points to value present at that memory address."<<endl;
		return 0;
}