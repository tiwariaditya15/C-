#include<iostream>
using namespace std;


//Static methods get just one time memory allocation irrespective of how many objects has been declared
//const declared functions are not authorized to manipulate any objects and const variable can not be modified when they are declared

class Example{
		static int stat;
		const int constant = 5;
		public:
			 static void print(){
					cout<<"stat : "<<stat;
			}

			int printUsingConst() const{
					return constant;
			} 
};

//static members need to be declared outisde class without using constructors
int Example::stat = 1;

int main(){

	Example exe;
	Example::print();
	cout<<"\nConstant : "<<exe.printUsingConst()<<endl;
	return 0;
}