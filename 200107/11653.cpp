#include <iostream>
using namespace std;

int main()
{
	int N;
	bool result = true;

	cin >> N;

	while (N != 1)
	{
		int k = 2; // 나누는 수
		for (int i = 2; i <= k; i++)
		{
			if (k % i == 0 && i == k)
			{
				// k가 소수일 때
				if (N % k == 0)
				{
					N = N / k;
					cout << k << endl;
				}
				// 안나누어 지면
				// 다음으로 작은 소수찾기
				else
					k++;
			}
			else if (k % i == 0)
				break;
		}

	}
}