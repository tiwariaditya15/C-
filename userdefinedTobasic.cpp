			
			/*conversion from class to basic data type	*/
			
			/*	
				To assign a data from user defined data type class to basic data type we need to write a function "operator" (just like we write when we overload operators)
				with the data type we are assigning our class to 
			*/

#include<iostream>
using namespace std;

class Data{
		float temperature;
	public:
		Data(float temp){
				temperature = temp;
		}

		operator float(){
				float fahrenheit;
				fahrenheit = (temperature * 9/5) + 32;
				return fahrenheit;

		}

		float getTemperature(){	return temperature;}
};

int main(){
			Data d(30);
			float fahrenheit;
			fahrenheit = d;
			cout<<"After assigning d of class Data to fahrenheit:"<<fahrenheit<<endl;
			return 0;
}


