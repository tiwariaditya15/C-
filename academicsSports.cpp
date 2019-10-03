#include<iostream>
using namespace std;
class Academics;
class Sports;
int result(Academics, Sports);
class Academics{
		private:
			int academicMarks;
		public:
			Academics(int x){
					academicMarks = x;
			}

			friend int result(Academics, Sports);
};

class Sports{
		private:
			int sportsMarks;
		public:
			Sports(int x){
				sportsMarks = x;
			}

			friend int result(Academics, Sports);
};

int result(Academics add, Sports sub){
	return add.academicMarks + sub.sportsMarks;
}
int main(){
	Academics a(10);
	Sports s(15);
	cout<<"\nAddition of both marks from academics and sports : "<<result(a, s)<<endl;
	return 0;
}