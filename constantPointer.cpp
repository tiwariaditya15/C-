			
#include<iostream>
using namespace std;

int main(void){
		const int val = 10;
		
		const int *ptr1 = &val;	//you can't change the value pointed by pointer
		cout<<"val:"<<*ptr1<<endl;
		ptr1++;					//but you change the value of pointer 
		cout<<"ptr1++:"<<*ptr1<<endl;

		
		/*When you do not want to allow your pointer to manipulate values of variable we can declare constant pointer when you can change 
		the value of variable but pointer won't be able to change the variablr value*/ 

		int val2 = 20;
		int *const ptr2 = &val2; 

		cout<<"*ptr2:"<<*ptr2<<endl;
		val2 = 30;		//allowed 
		//ptr2++;		//read-only object not allowed 
		return 	0;
}