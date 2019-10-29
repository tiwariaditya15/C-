						/*Aditya Tiwari
							oct 29 2019 	*/
#include<iostream>
using namespace std;

int main(void){

	cout<<"||||||||||||||||||||||||||||||||||||||||||Null Pointer||||||||||||||||||||||||||||||||||||||||||||||||||||||||||"<<endl;
	int *nullPointer = NULL;
	cout<<"Null pointer *nullPointer:"<<nullPointer<<endl<<endl<<endl; 

	cout<<"||||||||||||||||||||||||||||||||||||||||||Void Pointer||||||||||||||||||||||||||||||||||||||||||||||||||||||||||"<<endl;
	int x = 15;
	float f = 20.15;
	void *voidPointer;					//we can just use one void pointer to point multiple data types
	voidPointer = &x;

	cout<<"Value of x pointed by *voidPointer pointer:"<<*((int*)voidPointer)<<endl;		// we just need to type cast when we need values 
	
	voidPointer = &f;
	cout<<"value of f pointed by *voidPointer pointer:"<<*((float*)voidPointer)<<endl<<endl<<endl;		//from void pointers

	
	cout<<"||||||||||||||||||||||||||||||||||||||||||Dangling Pointer||||||||||||||||||||||||||||||||||||||||||||||||||||||||||"<<endl;
	
	int *ptr = (int*)malloc(sizeof(int));
	cout<<"Address allocated to ptr at runtime by malloc():"<<ptr<<endl;
	free(ptr);
	cout<<"Addres after freeing allocated memory to ptr:"<<ptr<<endl;
	return 0;
}