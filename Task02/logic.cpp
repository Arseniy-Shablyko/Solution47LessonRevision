// Среднее арифметическое ненулевых элементов
// [The arithmetic mean of non - zero elements].
//
// Дан вектор целых чисел. Необходимо разработать функцию, 
// которая вычисляет среднее арифметическое ненулевых элементов вектора.
#include "logic.h"
int calculate_sum_not_zero_numbers(int* array, int size) {
	int sum = 0;
	for (int i = 0; i < size; i++) {
		if (array[i] != 0) {
			sum += array[i];
		}
	}

	return sum;
}

int count_not_zero_numbers(int* array, int size) {
	int counter = 0;
	for (int i = 0; i < size; i++) {
		if (array[i] != 0) {
			counter++;
		}
	}

	return counter;
}

double calculate_arithmetical_mean_of_nonsero_elements(int* array, int size) {
	int sum = calculate_sum_not_zero_numbers(array, size);
	int counter = count_not_zero_numbers(array, size);

	if (counter == 0 || size < 0) {
		return 0;
	}

	double arithmetical_mean = (sum / 1.0) / counter;

	return arithmetical_mean;
}