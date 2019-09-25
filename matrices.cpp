#include<iostream>
using namespace std;

void checkEquality(int a[][3], int b[][3], int sA, int sB){
		bool equal = true;
		for(int i = 0 ; i < 3; i++){
				for(int j = 0; j < 3; j++){
						if( a[i][j] != b[i][j]){
								equal = false;
						}
				}
		}

		cout<<"\nMatrices are : "<<equal<<endl;
}
int main(){
	int a[3][3] = {
							{1, 2, 3},
							{4, 5, 6},
							{7, 8, 9}
					
					};

	int b[3][3] = {
							{1, 2, 3},
							{4, 5, 6},
							{7, 8, 9}
					};
	int sA, sB;// size of matrix a and b
	sA = sizeof(a)/sizeof(a[0]);
	sB = sizeof(b)/sizeof(b[0]);
	checkEquality(a, b, sA, sB);
	return 0;
}