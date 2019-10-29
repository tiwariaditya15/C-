
				/*		insertion and extraction operator overloading	
						Aditya Tiwari 	FYMCA-100
						22 oct 2019

				*/
#include<iostream>
#include<fstream>
using namespace std;
class Temperature;
ostream& operator <<(ostream& out, Temperature &t);
istream& operator >>(istream &in, Temperature &t);
void operator >>(ifstream &in, Temperature &t);
void operator <<(ofstream &out, Temperature &t);

class Temperature{
		float deg, fahrenheit;
	public:
		Temperature(){
				deg = 0;
				fahrenheit = 0;
		}
		float getDeg(){	return deg;	}
		float getFah(){	return fahrenheit;	}
		friend ostream& operator <<(ostream &out, Temperature &t);
		friend istream& operator >>(istream &in, Temperature &t);
		friend void operator >>(ifstream &in, Temperature &t);
		friend void operator <<(ofstream &out, Temperature &t);

};

ostream& operator <<(ostream &out, Temperature &t){
			out << t.fahrenheit;
			return out;
}

istream& operator >>(istream &in, Temperature &t){
		in >> t.deg;
		t.fahrenheit = t.deg * 9/5 +32;
		return in;
}
void operator >>(ifstream &in, Temperature &t){
		in >> t.deg;
		t.fahrenheit = t.deg * 9/5 +32;

}
void operator <<(ofstream &out, Temperature &t){
				out << "The temperature in degree celcius is "<<t.deg<<".\nTemperature in fahrenheit is "<<t.fahrenheit<<"."<<endl;
}

int main(){
	Temperature temp;
	cout<<"Enter temperature in degree celcius : ";
	cin >> temp;
	cout<<"\nConverted temperature in fahrenhiet : ";
	cout << temp << endl;
	ofstream writeFile("temperature.txt");
	writeFile << temp;
	writeFile.close();
	ifstream readFile("temperature.txt");
	readFile >> temp;
	readFile.close();
	return 0;
}