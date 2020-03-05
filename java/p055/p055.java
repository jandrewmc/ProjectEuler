class p055
{
	public static void main(String args[])
	{
		p055 p = new p055();

		System.out.println(p.reverse(123456789));
	}

	public long reverse(long number)
	{
		long regularNumber = number;

		long reversedNumber = 0;

		while (regularNumber > 0)
		{
			reversedNumber *= 10 + (regularNumber % 10);
			regularNumber /= 10;
		}
		return reversedNumber;
	}
}
