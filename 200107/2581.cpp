#include <iostream>
using namespace std;

int main()
{
	int N, M;
	int sum = 0, min;

	cin >> N >> M;

	min = M;

	// �Ҽ��� ���ϴ� �κ�
	for(int k = N; k <= M; k++)
	{

		for (int i = 2; i <= k; i++)
		{
			// �Ҽ��� ��� -> �ּڰ�, �� ���ϱ�
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
	// �Ҽ��� ���� ���
	if (sum == 0)
		cout << "-1" << endl;
	// �Ҽ��� �ִ� ���
	else
	{
		cout << sum << endl;
		cout << min << endl;
	}
}