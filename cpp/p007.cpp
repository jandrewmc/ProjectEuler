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

int result()
{
	char *array = sieveOfE(500000);
	int count = 0;

	for (int i = 0; i < 500000; i++)
	{
		if (array[i] == 1) count++;
		if (count == 10001) return i;
	}
	return 0;
}

int main()
{
	cout << result() << endl;			
}
