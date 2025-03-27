
int get_max_digit(int n)
{
	int max = 0;

	while (n > 0)
	{
		int digit = n % 10;
		if (digit > max)
		{
			max = digit;
		}
		n /= 10;
		
	}


	return max;
}

int get_max_digit_recursia(int n)
{
	if (n < 10)
	{
		return n;
	}

	int digit = n % 10;

	n = get_max_digit_recursia(n / 10);

	return digit > n ? digit : n;

}