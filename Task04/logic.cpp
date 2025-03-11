// Количество локальных минимумов и максимумов
// [The Number of local minima and maxima]
//
// Дан вектор целочисленных значений. Необходимо разработать
// функцию, которая подсчитывает количество локальных минимумов 
// и максимумов.
#include "logic.h"

void count_local_min_and_max(int* array, int size, int* min_count, int* max_count) {
	*min_count = 0;
	*max_count = 0;

	if (array[0] < array[1]) {
		*min_count += 1;
	}
	else if(array[0] > array[1]) {
		*max_count += 1;
	}

	if (array[size - 1] > array[size - 2]) {
		*max_count += 1;
	}
	else if (array[size - 1] < array[size - 2]) {
		*min_count += 1;
	}

	for (int i = 1; i < (size - 1); i++) {
		if (array[i] < array[i - 1] && array[i] < array[i + 1]) {
			*min_count += 1;
		}
		if (array[i] > array[i - 1] && array[i] > array[i + 1]) {
			*max_count += 1;
		}
	}

	if (size < 2) {
		*min_count = 0;
		*max_count = 0;
	}
}