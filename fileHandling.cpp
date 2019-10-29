		
			/* Programs on streams
			   Aditya Tiwari FYMCA - 100	
			   oct 21 2019		*/

#include<iostream>
#include<fstream>
using namespace std;

int main(void){
		ofstream writeFile("runner.txt", ios::app);
		writeFile<<"This is code to insert data in file using ofstream and then retrieve that data from file using ifstream."<<endl;
		writeFile.close();

		ifstream readFile("runner.txt");
		char ch;
		string line;
		readFile.seekg(15);
		while(!readFile.eof()){
					readFile.get(ch);cout<<ch;			//or we can use  getline(readFile, line);
					cout<<line;
		}
		readFile.close();
		return 0;
}