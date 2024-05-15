#include <iostream>

void degree_of(int* num1, int num2) {  // Задача 2.
	int result = 1;
	for (int i = 0; i < num2; i++) {
		result *= *num1;
	}	
		std::cout << result ;	
}


int main() {
	setlocale(LC_ALL, "Russian");

	// задача 1.

	const int size = 10;
	int arr[size]{ 8, 15, 6, 19, 25, 38, 17, 56, 75, 41 };  // 15 8 19 6 38 25 56 17 41 75

	int* parr = &arr[0];
	for (int i = 0; i < size; i++) {
		int tmp = *(parr + i);
		*(parr + i) = *(parr + i + 1);
		*(parr + i + 1) = tmp;
		i++;
	}

	for (int i = 0; i < size; i++)	
	std::cout << arr[i] << ' ';
	std::cout << std::endl;
	
	// Задача 2.

	int n = 10;
	degree_of(&n, 3);

	return 0;
}