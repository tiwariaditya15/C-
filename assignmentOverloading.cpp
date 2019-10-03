#include<iostream>
using namespace std;

class Example{
			int local;
		public:
			Example(int x){
				local = x;
			}

			int getLocal();
			void operator +=(Example&);
			void operator -=(Example&);
			void operator *=(Example&);
			void operator /=(Example&);
};

int Example::getLocal(){ return local; }

void Example::operator +=(Example &a){
		
		local += a.local;
		 
}

void Example::operator -=(Example &a){
	
	local -= a.local;
	
}

void  Example::operator *=(Example &a){
		local *= a.local;
}

void Example::operator /=(Example &a){
			local /= a.local;
}

int main(){
		Example obj1(15), obj2(10);
		cout<<"\n(Initially)obj1.Local:"<<obj1.getLocal()<<" & obj2.Local:"<<obj2.getLocal()<<endl;
		obj1.operator +=(obj2);
		cout<<"\n(After +=)obj1.Local:"<<obj1.getLocal()<<" & obj2.Local:"<<obj2.getLocal()<<endl;
		obj1.operator -=(obj2);
		cout<<"\n(After -=)obj1.Local:"<<obj1.getLocal()<<" & obj2.Local:"<<obj2.getLocal()<<endl;
		obj1.operator *=(obj2);
		cout<<"\n(After *=)obj1.Local:"<<obj1.getLocal()<<" & obj2.Local:"<<obj2.getLocal()<<endl;
		obj1.operator /=(obj2);
		cout<<"\n(After /=)obj1.Local:"<<obj1.getLocal()<<" & obj2.Local:"<<obj2.getLocal()<<endl;
		cout<<endl;
		return 0;
}