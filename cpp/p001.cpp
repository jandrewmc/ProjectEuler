#include <iostream>

using namespace std;

int result()
{
	int sum = 0;
	const int MAX = 1000;

	for (int i = 0; i < MAX; i += 3) sum += i;
	for (int i = 0; i < MAX; i += 5) sum += i;
	for (int i = 0; i < MAX; i += 15) sum -= i;
	
	return sum;
}

int main()
{
	cout << result() << endl;		
}
