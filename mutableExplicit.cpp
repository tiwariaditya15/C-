#include<iostream>
using namespace std;

class Sample{
		 mutable int var;
		public:
		 Sample(int x){
		 	var = x;
		 }
		 
		 int getVar()const{
		 		
		 		var *= 10;		//if var wasn't mutable then this function wouldn't be able to manipulate variable "var"
		 						//because const functions are read-only objects they can't manipulate class data members 
		 		return var;
		 }	
};

int main(){
		Sample s(15);
		cout<<"\nMutable object var:"<<s.getVar()<<endl;
		return 0;
}