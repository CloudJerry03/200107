#include <iostream>
using namespace std;

int main()
{
	int N;
	bool result = true;

	cin >> N;

	while (N != 1)
	{
		int k = 2; // ������ ��
		for (int i = 2; i <= k; i++)
		{
			if (k % i == 0 && i == k)
			{
				// k�� �Ҽ��� ��
				if (N % k == 0)
				{
					N = N / k;
					cout << k << endl;
				}
				// �ȳ����� ����
				// �������� ���� �Ҽ�ã��
				else
					k++;
			}
			else if (k % i == 0)
				break;
		}

	}
}