#include<iostream>
using namespace std;

class Execute{
		int array[5];
	public:
		Execute(int x){
				for(int i = 0; i < sizeof(array)/sizeof(array[0]); i++){
						array[i] = (i + 1) * 100;
				}
		}
		int getSizeofarray();
		int operator [](int i);
};

int Execute::getSizeofarray(){
		return sizeof(array)/sizeof(array[0]);
}
int Execute::operator[](int i){
		return array[i];
}
int main(){

		Execute obj(10);
		
			for(int iterator = 0;iterator < obj.getSizeofarray(); iterator++){
						cout<<"obj["<<iterator<<"]:"<<obj[iterator]<<endl;
			}
			
		return 0;
}