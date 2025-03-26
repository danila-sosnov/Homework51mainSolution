#include <iostream>
using namespace std;
#include "logic.h"

int main()
{
	int number;
	cout << "Input your number: ";
	cin >> number;

	number = number > 0 ? number : -number;

	cout << "Max digit of a number: " << get_max_digit(number) << endl;
	cout << "Max digit of a number: " << get_max_digit_recursia(number);




	return 0;
}