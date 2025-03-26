#include <iostream>
using namespace std;
#include "logic.h"

int main()
{
	int number;
	cout << "Input your number: ";
	cin >> number;

	number = number > 0 ? number : -number;

	cout << "Sum of digits of a number is " << get_sum_of_digits(number) << endl;
	cout << "Sum of digits of a number is " << get_sum_of_digits_recursia(number);

	

	return 0;
}