/* 			Consersion from basic type to class type by Aditya Tiwari Fymca-100 */

			/*

			when we are assigning a basic data type to a user defined data type ie class then compiler doesn't know how to assign those basic type to class because class has multiple members as well as member function 

			So we perform data conversion. To convert basic data type to user defined type, there should be a constructor of user defined class which receives just 1 argument of basic data type that we are assigning to class.

			*/  


#include<iostream>
using namespace std;

class Data{
		double value;
		public:
			Data(){
					value = 0;
			}

			Data(double b){
					value = b;
			}

			double getValue(){	return value;}

};

int main(){
		Data d;
		double var;cout<<"\nEnter a data:";cin>>var;
		d = var;
		cout<<"\nAfter assigning var to d of class data value is:"<<d.getValue()<<endl;
		return 0;
}