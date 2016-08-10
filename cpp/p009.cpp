#include <iostream>

using namespace std;

int result()
{
	for (int a = 0; a < 1000; a++)
		for (int b = a + 1; b < 1000; b++)
			for (int c = b + 1; c < 1000; c++)
				if (a + b + c == 1000)
					if (a * a + b * b == c * c)
						return a * b * c;
	return 0;
}

int main()
{
	cout << result() << endl;		
}
