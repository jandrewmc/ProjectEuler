#include <iostream>
#include <cmath>

using namespace std;

char *sieveOfE(long limit)
{
	char *array = new char[limit];

	for (long i = 0; i < limit; i++) array[i] = 1;

	array[0] = 0;
	array[1] = 0;

	for (int i = 2; i < limit; i++)
		for (int j = i + i; j < limit; j += i)
			array[j] = 0;
	return array;
}

int result()
{
	long limit = 600851475143;

	char *array = sieveOfE(sqrt(limit));

	for (int i = sqrt(limit) - 1; i >= 0; i--)
		if (array[i] == 1 && limit % i == 0)
			return i;
	return 0;
}

int main()
{
	cout << result() << endl;		
}
