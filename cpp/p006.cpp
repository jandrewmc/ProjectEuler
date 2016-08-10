#include <iostream>

using namespace std;

long result()
{
	long sumOfSquares = 0;
	long squareOfSums = 0;

	long num = 0;
	for (int i = 1; i <= 100; i++)
	{
		sumOfSquares += i * i;
		num += i;
	}
	squareOfSums = num * num;

	long result = sumOfSquares - squareOfSums;

	if (result < 0) result *= -1;
	return result;
}

int main()
{
	cout << result() << endl;		
}
