#include<iostream>
#include<string>
using namespace std;
int main(){

	string str = "This is aditya from first year Timscdr";
	cout<<"\nstr size : "<<str.capacity()<<endl;
	cout<<"\nstr length : "<<str.length()<<endl;
	int pos = str.find("aditya");
	cout<<"\nPosition of aditya in str(using find()) : "<<pos<<endl;
	int rpos = str.rfind("from");
	cout<<"\nPosition of from in str(using rfind()) : "<<rpos<<endl;
	str.push_back('h');
	cout<<"\nAfter push_back() in str : "<<str<<endl;
	return 0;
}