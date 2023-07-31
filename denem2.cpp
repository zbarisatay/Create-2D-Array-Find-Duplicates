#include <iostream>
using namespace std;
int** create(int rows, int cols) {
	int** arr =new int* [rows];
	for (int i = 0;i < rows;i++) {
		arr[i] = new int[cols];
		for (int j = 0; j < cols; j++) {
			arr[i][j] = rand() % 11;
		}
	}return arr;
}
void print(int** arr, int rows, int cols) {
	for (int i = 0;i < rows;i++) {
		for (int j = 0; j < cols; j++) {
			cout << arr[i][j] << " ";
		}cout << endl;
	}
}
int find(int** arr, int rows, int cols) {
	int count = 0;
	for (int i = 0;i < rows;i++) {
		for (int j = 0; j < cols; j++) {
			if (arr[i][j] % 2 == 0) {
				count++;
			}
		}
	}return count;
}
int main(){
	int rows;
	int cols;
	cout << "Input rows : ";
	cin >> rows;
	cout << "input cols : ";
	cin >> cols;
	int** arr = create(rows, cols);

	cout << "Generated Arrays :" << endl;
	print(arr, rows, cols);

	int evencounter = find(arr, rows, cols);
	cout << "The amount of even number : " << evencounter;


}