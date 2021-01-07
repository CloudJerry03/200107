#include <iostream>
using namespace std;

int main()
{
	int N;
	int result = 0;

	cin >> N;

	while (N--)
	{
		int tmp;
		cin >> tmp;

		for (int i = 2; i <= tmp; i++)
		{
			
			if (tmp % i == 0 && i == tmp)
				result++;
			else if (tmp % i == 0)
				break;
		}
	}

	cout << result;
}