#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	double T, x, y;
	cin >> T;

	while(T--)
	{
		cin >> x >> y;
		double i = 1, cnt = 0;

		//y-x 보다 큰 제곱수 구하기
		for (;; i++)
			if (i * i > y - x)
				break;

		if ((i - 1) * (i - 1) == y - x)
			cnt = 2 * (i - 1) - 1;
		else if ((i - 1) * (i - 1) + ((i * i - (i - 1) * (i - 1)) / 2) >= y - x)
			cnt = 2 * i - 2;
		else
			cnt = 2 * i - 1;
		
		cout << cnt << endl;
	
	}
	return 0;
}