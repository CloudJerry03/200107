#include <iostream>
using namespace std;

int main()
{
	int N, M;
	int sum = 0, min;

	cin >> N >> M;

	min = M;

	// 소수를 구하는 부분
	for(int k = N; k <= M; k++)
	{

		for (int i = 2; i <= k; i++)
		{
			// 소수인 경우 -> 최솟값, 합 구하기
			if (k % i == 0 && i == k)
			{
				sum += k;
				if (k < min)
					min = k;
			}
			else if (k % i == 0)
				break;
		}
	}
	// 소수가 없는 경우
	if (sum == 0)
		cout << "-1" << endl;
	// 소수가 있는 경우
	else
	{
		cout << sum << endl;
		cout << min << endl;
	}
}