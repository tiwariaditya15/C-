#include<iostream>
#include<vector>
using namespace std;

int main(void){
	vector<int> obj;

	for(int i = 1; i <= 5; i++)
			obj.push_back(i);

	cout<<"This is location at 0th place :"<<obj.at(1);
	return 0;
}
