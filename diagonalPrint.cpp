#include<iostream>
using namespace std;
#define row 6
#define col 6
void printMatrix(int mat[][col]){
		for(int i = 0; i < row; i++){
				for(int  j = 0; j < col; j++){
						cout<<mat[i][j]<<" ";
				}
				cout<<endl;
		}
}

void printDiagonal(int mat[][col]){
	int sum = 0;
		for(int i = 0; i < row; i++){
				for(int j= 0 ; j < col; j++){
						if ( i == j) {
								sum = sum + mat[i][j];
								cout<<mat[i][j]<<"->";
						}
				}
		}
		cout<<"\nSum of diagonal : "<<sum<<endl;
}

void printDiagonalReverse(int mat[][col]){
	int sum = 0;
		for(int i = 0; i < row; i++){
				sum += mat[row - i -1][i];
				cout<<mat[row - i - 1][i]<<"->";
		}
		cout<<"\nSum of reversed diagonal : "<<sum<<endl;
}
int main(){
	int mat[row][col] = {
							{1,8,7,9,4,7},
							{1,9,7,6,4,8},	
							{7,8,5,9,4,6},
							{7,4,2,1,9,5},
							{6,4,8,9,4,7},
							{2,4,5,7,1,3}
						};

		printMatrix(mat);
		cout<<"\nSee the diagonal elements"<<endl;
		printDiagonal(mat);
		cout<<"\nSee the diagonal elements reversed"<<endl;
		printDiagonalReverse(mat);
	return 0;
}