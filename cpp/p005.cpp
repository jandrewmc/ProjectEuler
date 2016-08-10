#include <iostream>

using namespace std;

long result()
{
	for (long i = 1; i < 999999999999; i++)
	{
		for (int j = 2; j <= 20; j++)
		{
			if (i % j != 0) break;
			if (j == 20) return i;
		}
	}
	return 0;		
}

int main()
{
	cout << result() << endl;		
}
