#include <iostream>
using namespace std;
#include "logic.h"

int main()
{
	int number;
	cout << "Input your number: ";
	cin >> number;

	string msg = is_power_of_three(number) ? "Yes" : "No";

	cout << "Is power of three: " << msg << endl;

	msg = is_power_of_three_recursia(number) ? "Yes" : "No";

	cout << "Is power of three: " << msg;
	



	return 0;
}