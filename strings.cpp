/*
#include<iostream>
#include<stdio.h>
 
using namespace std;
 
int main()
{
	char a[30];
	int i;
	cout<<"Enter a string:";
	gets(a);
	
	for(i=0;a[i]!='\0';++i);
	
	cout<<"\nLength of the string '"<<a<<"' is "<<i;madam
 
	return 0;
}*/
/*
#include<iostream>
using namespace std;

int main(){
	string name;
	cin>>name;
	int strL = name.size(), flag = 0;

	for(int i = 0 ;i < strL; i++){
			if( name[i] != name[strL-i-1])
				flag = 1;
	}

	if(flag){
			cout<<"\nNumber is NOT palinedrome.";
		}else{
				cout<<"\nNumber is palinedrome.";
		}
	return 0;
}*/

/*
#include<iostream>
using namespace std;

int main(){
	string name;
	getline(cin, name);
	int strL = name.size(), flag = 0;

	for(int i = 0 ;i < strL; i++){
			if( name[i] == 32)
				name[i] = 45;
	}

	cout<<name;
	return 0;
}*/

#include<iostream>
using namespace std;

int main(){
	string str_0, str_1;
	bool equal = true;
	cin>>str_0>>str_1;
	if( str_0.size() == str_1.size() ){
			for(int i = 0;i < str_0.size(); i++){
					if (str_0[i] != str_1[i]){
							equal = false;
				
					}
			}
			if(equal){
			cout<<"\nStrings "<<str_0<<" and "<<str_1<<" are identical."<<endl;
	}
	}else { 
				cout<<"\nStrings "<<str_0<<" and "<<str_1<<" are not identical."<<endl;
		
		}

	
	return 0;
}