#include<iostream>
using namespace std;

int main(void){
			int val = 10;
			int *ptr;
		 cout<<"Address if variable val:"<<&val<<endl;
		 cout<<"Address of ptr:"<<ptr<<endl;
		 for (int i = 1;i <= 5; i++)	cout<<"Address of ptr+"<<i<<":"<<ptr+i<<endl;
			return 0;;	
}