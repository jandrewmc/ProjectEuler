#include<iostream>

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

long result()
{
	long limit = 2000000;
	char *array = sieveOfE(limit);

	long sum = 0;
	for (int i = 0; i < limit; i++)
		if (array[i] == 1) sum += i;
	return sum;
}

int main()
{
	cout << result() << endl;		
}
