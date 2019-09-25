#include<iostream>

using namespace std;

class Table{
			int tableNumber;
		public:
			void setTableNumber(int);
			int calculateTable(int num, int i);


};

void Table::setTableNumber(int x){
		tableNumber = x;
}

int Table::calculateTable(int num, int i){

			if(i > 10){
					return 1;
			}
			cout<<num*i<<endl;
			return calculateTable(num, i + 1);
}
int main(){
		int x;
		cout<<"\nEnter table number : ";
		cin>>x;
		Table t;
		t.setTableNumber(x);
		t.calculateTable(x, 1);
		return 0;
}