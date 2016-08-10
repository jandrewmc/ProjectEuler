#include <iostream>

using namespace std;

bool isPalindrome(int num)
{
	string val = to_string(num);

	int i1 = 0;
	int i2 = val.length() - 1;

	while (i1 < i2)
	{
		if (val.at(i1) != val.at(i2)) return false;
		i1++;
		i2--;
	}
	return true;
}

int result()
{
	int max = 0;
	for (int i = 999; i >= 100; i--)
	{
		for (int j = 999; j >= 100; j--)
		{
			int res = i * j;
			if (isPalindrome(res)) 
				if (res > max) max = res;
		}
	}
	return max;
}

int main()
{
	cout << result() << endl;		
}
