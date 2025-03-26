int get_sum_of_digits(int n)
{
	
	int sum = 0;


	while (n > 0)
	{
		int digit = n % 10;
		sum += digit;
		n /= 10;
	}

		return sum;
}

int get_sum_of_digits_recursia(int n)
{

	if (n == 0)
	{
		return n;
	}

	

	return  n % 10 + get_sum_of_digits_recursia(n / 10);
}