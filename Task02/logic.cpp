bool is_power_of_three(int n)
{
	if (n <= 0)
	{
		return false;
	}

	
	while (n > 1)
	{
		if (n % 3 != 0)
		{
			return false;
		}

		n /= 3;
	}
		
	return true;
}

bool is_power_of_three_recursia(int n)
{
	if (n <= 0)
	{
		return false;
	}
	
	if (n == 1)
	{
		return true;
	}

	if (n % 3 != 0)
	{
		return false;
	}

	return is_power_of_three_recursia(n / 3);
}