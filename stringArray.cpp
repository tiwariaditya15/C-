#include<iostream>
#include<string>
using namespace std;

int main(){
	char name[5][10];
	int i = 0;
	cout<<"\nEnter 5 names respectively :";
	for(int i = 0; i < 5; i++){
		cin>>name[i];
	}
	i = strlen(name[0]);
	for(int i = 0; i < 5; i++){
		if( i < strlen(name[i])) i = strlen(name[i]);
	}
	cout<<"\nLargest String has length of : "<<i<<endl;
	return 0;
}