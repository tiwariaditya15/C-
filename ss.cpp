#include<iostream>

#include<math.h>

 

#define PI 3.14

 

using namespace std;

 

class Shape

{

	public :

		int area(int);

		double area(double);

		int area(int, int);

		double area(int ,int, int);

};

 

int Shape::area(int side) {

	return side * side;

}

 

double Shape::area(double radius) {

	return PI * pow(radius, 2);

}

 

int Shape::area(int len, int w) {

	return len * w;

}

 

double Shape::area(int a, int b, int c) {

	float s = (a + b + c) / 2;

	return pow((s * (s - a) * (s - b) * (s - c)), 0.5);

}

 

class Distance

{

	double feet, inches;

	public :

		void getDistance();

		void showDistance();

		Distance addDistance(Distance, Distance, Distance);

};

 

void Distance::getDistance() {

	cout<<"Feet\t:    ";

	cin>>feet;

	cout<<"Inches\t:    ";

	cin>>inches;

}

 

void Distance::showDistance() {

	cout<<"Feet\t:    "<<feet<<endl;

	cout<<"Inches\t:    "<<inches<<endl;

}

 

 Distance Distance::addDistance(Distance d1, Distance d2, Distance d3) {

	d3.feet = d1.feet + d2.feet;

	d3.inches = d1.inches + d2.inches;

	if(d3.inches >= 12) {

		d3.feet++;

		d3.inches -= 12;

	}

return d3;

}

 

int main()

{

	int ope;

	cout<<"1. Operator Overloading\n2. Passing object as a Parameter\n\nEnter Your Choice : ";

	cin>>ope;

	

	int a, b, c;

	double r;

	switch(ope) {

		case 1:

			Shape s;

			cout<<endl<<"Enter side of a square : ";

			cin>>a;

			cout<<"Area of Square is "<<s.area(a)<<" Sq. unit"<<endl<<endl;

			cout<<"Enter length and width of rectangle : ";

			cin>>a>>b;

			cout<<"Area of Rectangle is "<<s.area(a, b)<<" Sq. unit"<<endl<<endl;

			cout<<"Enter sides of triangle : ";

			cin>>a>>b>>c;

			cout<<"Area of Triangle is "<<s.area(a, b, c)<<" Sq. unit"<<endl<<endl;

			cout<<"Enter radius of a circle : ";

			cin>>r;

			cout<<"Area of Circle is "<<s.area(r)<<" Sq. unit"<<endl<<endl;

			break;

		case 2:

			Distance d1, d2, d3, d4;

			cout<<endl<<"Enter 1st distance-"<<endl;

			d1.getDistance();

			cout<<endl<<"Enter 2nd distance-"<<endl;

			d2.getDistance();

			d4 = d3.addDistance(d1, d2, d3);

			cout<<endl<<"After Addition : "<<endl;

			d4.showDistance();

			break;

		default : 

			cout<<"Invalid Choice!";

	}

	

	return 0;

}