#include <iostream>
#include <cmath>

using namespace std;

int getFactorsCount(int num)
{
	int count = 2;
	for (int i = 2; i < sqrt(num); i++)
		if (num % i == 0) count += 2;
	return count;
}

int result()
{
	int triangleNumber = 1;
	for (int i = 2; i < 2000000000; i++)
	{
		triangleNumber += i;
		if (getFactorsCount(triangleNumber) >= 500) return triangleNumber;
	}
	return 0;
}

int main()
{
	cout << result() << endl;		
}

