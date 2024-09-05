#include <iostream>
#include <limits>

int main() {

	srand(time(NULL));

	int min = INT_MAX;
	int max = INT_MIN;

	int array[10] = {};

	for (int i = 0; i < 10; ++i) {
		array[i] = (i * 2) % 3;
	}

	for (int i = 0; i < 10; ++i) {
		if (array[i] < min) {
			min = array[i];
		}
		if (array[i] > max) {
			max = array[i];
		}
	}

	std::cout << "Array values: ";
	for (int i = 0; i < 10; ++i) {
		std::cout << array[i] << ' ';
	}
	std::cout << std::endl;

	std::cout << "Min is " << min << std::endl;
	std::cout << "Max is " << max << std::endl;
	std::cout << "Difference between max and min: " << max - min << std::endl;

	return 0;
}