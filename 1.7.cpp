//Write an algorithm such that if an element in an MxN matrix is 0, 
//its entire row and column is set to 0

#include <iostream>

using namespace std;

void print (int matrix[][4] , int n ){
	cout << "Printing the matrix " << endl;
	for (int i = 0 ; i < n ; i++){
		for (int j = 0; j < n ; j ++){
			cout << matrix[i][j] << " ";
		}
	cout << endl;
	
	}

}
void setZero(int a[][4], int n){
	int row[n], column[n];
	for (int i = 0 ; i < n ; i ++){
		row[i] = 1;
		column[i] = 1;
	}
	
	for (int i  = 0 ; i < n; i ++){
		for (int j = 0 ; j < n ; j++){
			if (a[i][j] ==0){
				row[i] = 0;
				column[j] = 0;
			}
	
		}
	}
	for(int i  = 0 ; i < n; i ++){
		for (int j = 0 ; j < n ; j++){
			if (row[i] == 0  || column[j] == 0){
				a[i][j] =0;
			}
	
		}
	}

	print (a , 4)	;

}

int main(){
	int arr[4][4]  = {{1,2,3,0},{1,2,3,4},{1,2,3,4},{0,2,3,4}};
	print (arr , 4)	;
	setZero(arr,4);


}