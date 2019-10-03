#include<iostream>
using namespace std;

class Celcius{
		float celcius;
	public:
		Celcius(){
				celcius = 0;
		}

		Celcius(float celcious){
				celcius = celcious;
		}

		float getTemperature(){	return celcius;	}

};

class Fah{
		float fahrenheit;
	public:
		Fah(){
				fahrenheit = 0;
		}
		void setFahrenheit(float f){
				fahrenheit = f;
		}

		operator Celcius(){
				float celcius;
				celcius = (fahrenheit - 32) * 5/9;
				return Celcius(celcius);
		}

};




int main(){
		Fah fah;
		Celcius celc;
		float f;
		cout<<"\nEnter temperature in fahrenheit:";cin>>f;
		fah.setFahrenheit(f);
		celc = fah;
		cout<<"\ntemperature in celcius(after assingment of class fah to class celcius):"<<celc.getTemperature()<<endl;
		return 0;
}