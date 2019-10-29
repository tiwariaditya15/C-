		/*Pointer to array and array of pointers
		Aditya Tiwari FYMCA-100*/

#include<iostream>
using namespace std;
const int MAX = 10;
void pointerToArray(){
		int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
		int *ptr;
		ptr = arr;				//this asigns the first base address of array in pointer variable
		cout << "\n\nElements inside array (Using 'pointer to array'): ";
		for(int i = 0;i < sizeof(arr)/sizeof(arr[0]); i++){
				cout << *ptr << " ";
				ptr++;
		}
		cout<<endl<<endl;
}

void arrayOfPointer(){
			int arr[MAX] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
			int *ptr[MAX];

			for(int i = 0;i < sizeof(arr)/sizeof(arr[0]); i++){
					ptr[i] = (arr + i); 
			}
			cout << "\n\nElements inside array (Using 'array to pointer'): ";
			for(int i = 0;i < sizeof(ptr)/sizeof(ptr[0]); i++){
					cout << *ptr[i] << " ";
			}
			cout << endl;
}
int main(void){
	pointerToArray();
	arrayOfPointer();
	return 0;
}