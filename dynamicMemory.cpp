#include<iostream>
using namespace std;

int main(void){
		int *value = new int(15);
		int *arr = new int[10];
		cout<<"address of variable which was created in runtime:"<<value<<" && value present at address:"<<*value<<endl;
		delete value;		//freed memory

		return 0; 
}