#include<iostream>
using namespace std;
int N; //size of required array

void sortMinMax(int a[]){
	int min, max;
	min=a[0];
	max=a[0];
	for(int i = 0; i < N; i++){
				if ( min > a[i]) min = a[i];
				if (max < a[i]) max = a[i];
		}

		cout<<"\nLargest number in array: "<<max<<"\n Smallest number in array : "<<min<<endl;
}

void sortArray(int *arr, int n){
	for(int i = 0; i < n; i++){
			cout<<arr[i]<<" "<<endl;
		}
}	
int main(void){
	cout<<"\nEnter size of array: ";
	cin>>N;
	int array[N], n;
	n = sizeof(array)/sizeof(int);
	for (int i = 0; i < N; i++){
			cin>>array[i];
	}
	sortMinMax(array);
	//sortArray(array, n);
	return 0;
}