#include<iostream>
using namespace std;

class Parent{
		private:
			int prvt;
		protected:
			int var;
		public:
			Parent(int x){
					var = x;
			}
			int getVar();
};
int Parent::getVar(){	return var;	}

class Child:public Parent{
		public:
			Child(int a):Parent(a){}
			void printer();
};

void Child::printer(){		
cout<<"\nProtected data member \"var of parent\":"<<var<<endl;	
cout<<"\nPrivate data member\"prvt of parent\"(which is not accessible in child since it is private for parent):"<<endl;//prvt<<endl;
}																//child class can access protected data members of class without even using public member function
																//but this protected member can't be accessed outside parent as well as child class 
															//because it's protected for parentas well as child


int main(){
		Child c(10);
		c.printer();
		return 0;
}