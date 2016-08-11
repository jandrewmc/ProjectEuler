#include<iostream>

using namespace std;

int result()
{
	int maxChainLength = 0;
	int maxChainNumber = 0;

	for (int i = 3; i < 1000000; i++)
	{
		int chainLength = 0;
		long numberToModify = i;

		while (numberToModify != 1)
		{
			if (numberToModify % 2 == 0)
				numberToModify /= 2;
			else
				numberToModify = 3 * numberToModify + 1;
			chainLength++;
		}
		if (chainLength > maxChainLength)
		{
			maxChainLength = chainLength;
			maxChainNumber = i;
		}
	}
	return maxChainNumber;
}

int main()
{
	cout << result() << endl;			
}
