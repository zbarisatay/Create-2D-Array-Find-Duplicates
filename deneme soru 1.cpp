#include <iostream>
using namespace std;
int** create(int rows, int cols) {
	int** arr = new int* [rows];
	for (int i = 0; i < rows; i++) {
		arr[i] = new int[cols];
		for (int j = 0; j < cols; j++) {
			cout << "arr[" << i << "][" << j << "]= ";
			cin >> arr[i][j];
		}
	}return arr;
}
void print(int** arr, int rows, int cols) {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			cout << arr[i][j] << " ";
		}cout << endl;
	}
}
int find(int** arr, int rows, int cols, int target) {
	int count = 0;
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			if (arr[i][j] == target) {
				count++;
			}
		}
	}return count;
}
int main() {
	int rows;
	int cols;
	cout << "Input nummber of rows: ";
	cin >> rows;
	cout << "Input nummber of cols: ";
	cin >> cols;
	int** arr = create(rows, cols);

	cout << "Arrays: " << endl;
	print(arr, rows, cols);

	int target;
	cout << "Input number to find of duplications : ";
	cin >> target;
	int t = find(arr, rows, cols, target);
	cout << "The amount of duplications " << t << endl;
}