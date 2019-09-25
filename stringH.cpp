#include<iostream>
#include<string.h>
using namespace std;

int strCopy(char str1[], char str2[]){
		char str3[50];
		strcpy(str3, str1);
		cout<<"\nstr3 after copying it from str1 : "<<str3<<endl;
}

bool strCompare(char str1[], char str2[]){
		return strcmp(str1, str2);
}
void strLength(char str1[], char str2[]){
		cout<<"\nstr1 length : "<<strlen(str1)<<endl;
		cout<<"\nstr2 length : "<<strlen(str2)<<endl;
}
void strConcatenation(char str1[], char str2[]){
		char str3[] = "This is str3";
		strcat(str2, str1);
		cout<<"\nstr2 concatenation with str1 : "<<str2<<endl;
		strcat(str3, str2);
		cout<<"\nstr3 concatenation with str2 : "<<str3<<endl;
}


int main(){
	char str1[] = "Hello World!";
	char str2[] = "This is Jeffery";
	cout<<"\nstr1 is equal to str2 : "<<strCompare(str1, str2)<<endl;
	strCopy(str1, str2);
	strLength(str1, str2);
	strConcatenation(str1, str2);
	return 0;
} 