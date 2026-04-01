#include "logic.h"

int recursion(int number) {

	if (number <= 9) {
		return number;
	}

	return recursion(number / 10) + number % 10;
}

int sum(int number) {
	number *= (number < 0 ? -1 : 1);
	return recursion(number);
}

