#include<iostream>

using namespace std;

int result()
{
	const int MAX = 4000000;
	
	int f1 = 0;
	int f2 = 1;

	int sum = 0;

	while (f1 < MAX && f2 < MAX)
	{
		if (f1 < MAX && f1 % 2 == 0) sum += f1;
		if (f2 < MAX && f2 % 2 == 0) sum += f2;

		f1 += f2;
		f2 += f1;
	}
	return sum;
}

int main()
{
	cout << result() << endl;		
}
