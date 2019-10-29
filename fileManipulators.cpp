		/*File Streams use of tellp(), seekp(), seekg() and tellg()
			Aditya Tiwari FYMCA - 100	21 oct 2019 	*/

#include<iostream>
#include<fstream>
using namespace std;
/*
int main(void){
	ofstream writeFile("runner.txt", ios::app);
	cout<<"tellp() - "<<writeFile.tellp()<<"(before writing)"<<endl;
	writeFile << "Hello World!!!!\n";
	cout<<"tellp() - "<<writeFile.tellp()<<"(after writing)"<<endl;
	writeFile.close();	

	ifstream readFile("runner.txt");
	char ch;
	cout<<"tellg() - "<<readFile.tellg()<<"(it shows that when we open file in read mode tellg() point to first character)"<<endl;
	while(!readFile.eof()){
			readFile.get(ch);
	}
	cout<<"tellg() - "<<readFile.tellg()<<"(after reading text)"<<endl;
	return 0;
}*/

int main(){
		ofstream writeFile("runner.txt");
		ifstream readFile("runner.txt");
		char ch;
		readFile.seekg(4, ios::beg);

		while(readFile)	{	
					readFile.get(ch);
					cout<<ch;
		}

		writeFile.seekp(50, ios::beg);
		writeFile << "This is writing after 10, ios::beg";
		
		while(readFile)	{	
					readFile.get(ch);
					cout<<ch;
		}
		writeFile.close();
		return 0;
}