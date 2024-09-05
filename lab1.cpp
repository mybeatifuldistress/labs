#include <iostream>
#include <limits>

int main() {

	int min = INT_MAX;
	int max = INT_MIN;

	int size;

	std::cout << "Enter array size: " << std::endl;
	std::cin >> size;

	int* array = new int[size];

	std::cout << "Enter numbers of array: " << std::endl;
	for (int i = 0; i < size; ++i) {
		std::cin >> array[i];
	}

	std::cout << "Array values: ";
	for (int i = 0; i < size; ++i) {
		std::cout << array[i] << ' ';
	}
	std::cout << std::endl;

	for (int i = 0; i < size; ++i) {
		if (array[i] < min) {
			min = array[i];
		}
		if (array[i] > max) {
			max = array[i];
		}
	}

	std::cout << "Min is " << min << std::endl;
	std::cout << "Max is " << max << std::endl;
	std::cout << "Difference between max and min: " << max - min << std::endl;

	delete[] array;

	return 0;
}