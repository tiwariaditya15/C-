#include<iostream>
using namespace std;

class Example{
		int a, b;
		public:
			Example(){
					a = 0;
					b = 0;
			}
			Example(int x, int y){
					a = x;
					b = y;
			}
			Example(Example & x){
					a = x.a;
					b = x.b;
			}

			int getA(){
					return a;
				}

			int getB(){
					return b;
			}

			~Example(){
					cout<<"\nThis is hello from destructor."<<endl;
			}
};

int main(){

	Example e1; //default constructor will be call
	Example e2(10, 20); //parameterized constructor will be called
	Example e3(e2);		//this is copy constructor e3 will initialize using e2 a and b values
	cout<<"\n e1. a : "<<e1.getA()<<" & e1.b : "<<e1.getB(); 
	cout<<"\n e2.a : "<<e2.getA()<<" & e2.b : "<<e2.getB();
	cout<<"\n e3.a : "<<e3.getA()<<" & e3.b : "<<e3.getB();
	return 0;
}