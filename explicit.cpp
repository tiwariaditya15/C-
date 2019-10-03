/*Aditya Tiwari Fymca 100*/

/*	Any class having a constructor with just one argument automaticly or implicitely becomes conversion constructor as we have seen in case of data conversion from basic data type to 
	class data type.
	So this property of compiler can not be usefull in a scenario wher we accidently assign value to data member unintentionally because if we assign a data to class it will call 
	conversion constructor ands will change value.
	Explicit keywords are used with constructor which has just one argument which is conversion constructor for compiler.  
*/ 

#include<iostream>
using namespace std;

class Sample{
			float value;
		public:
			Sample(){}
			explicit Sample(float f){
					value = f;
			}
};

int main(){
		Sample s1(15);		//This will call Sample(float f){} which is legit
		Sample s2 = 100;		//even this would also call Sample(float f){} but accidentally assigning values to class or to avoid these type of constructor conversion we 
							//need explicit keyword
		return 0;
}