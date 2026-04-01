#include "logic.h"

bool recursion(int number,int sum) {
	if (number == 0 && sum == 0) {
		return true;
	}

	if ((number == 0 && sum != 0) 
		|| (number != 0 && sum == 0)) {
		return false;
	}

	int digit = number % 10;

	return recursion(number / 10, sum - digit);
}

bool equals(int number, int sum) {
	if (number < 0 || sum < 0) {
		return false;
	}

	return recursion(number, sum);
}