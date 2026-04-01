#include "logic.h"

int main() {
	cout << (is_the_number_power_of_three(-1) ? "yes" : "no") << endl;
	cout <<(is_the_number_power_of_three(0) ? "yes" : "no" )<< endl;
	cout <<(is_the_number_power_of_three(1) ? "yes" : "no" )<< endl;
	cout <<(is_the_number_power_of_three(3) ? "yes" : "no") << endl;
	cout <<(is_the_number_power_of_three(243) ? "yes" : "no" )<< endl;

	return 0;
}