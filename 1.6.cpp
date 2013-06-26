//Given an image represented by an NxN matrix, where each pixel in the image is 4 bytes, 
//write a method to rotate the image by 90 degrees Can you do this in place?

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
void rotate90(int matrix[][4] , int n ){
	for (int layer = 0; layer < n / 2; ++layer) {
		int first = layer; 
		int last=n-1-layer;
		for(int i = first; i < last; ++i) {
			int offset = i - first;
			int top = matrix[first][i]; // save top
			// left -> top
			matrix[first][i] = matrix[last-offset][first];
			// bottom -> left
			matrix[last-offset][first] = matrix[last][last - offset];
			// right -> bottom
			matrix[last][last - offset] = matrix[i][last];
			// top -> right
			matrix[i][last] = top; // right <- saved top
		}
	}
		print(matrix, 4);

}

int main (){
	int arr[4][4] = {{1,2,3,4},{1,2,3,4},{1,2,3,4},{1,2,3,4}};
	print(arr, 4);
	rotate90(arr, 4);
	return 0;
}
