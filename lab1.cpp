#include <iostream>
#include <ctime>

int main() {

	srand(time(NULL));

	int array[100][100];
	int rows;
	int cols;

	std::cout << "Enter the number of rows: " << std::endl;
	std::cin >> rows;
	
	std::cout << "Enter the number of cols: " << std::endl;
	std::cin >> cols;

	for (int i = 0; i < rows; ++i) {
		for (int j = 0; j < cols; ++j) {
			array[i][j] = 1 + rand() % 9;
		}
	}

	std::cout << "Array:" << std::endl;
	for (int i = 0; i < rows; ++i) {
		for (int j = 0; j < cols; ++j) {
			std::cout << array[i][j] << ' ';
		}
		std::cout << std::endl;
	}
	
	for (int i = 0; i < rows; ++i) {
		int sum_row = 0;
		for (int j = 0; j < cols; ++j) {
			sum_row += array[i][j];
		}
		std::cout << "Amount in row " << i + 1 << ": " << sum_row << std::endl;
	}

	std::cout << std::endl;

	for (int j = 0; j < cols; ++j) {
		int sum_col = 0;
		for (int i = 0; i < rows; ++i) {
			sum_col += array[i][j];
		}
		std::cout << "Amount in col " << j + 1 << ": " << sum_col << std::endl;
	}

	return 0;
}