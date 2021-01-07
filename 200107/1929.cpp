#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int N, M;

	cin >> N >> M;

	int* a = new int[M - N + 1];

	for (int i = 0; i <= M - N; i++)
	{
		a[i] = i + N;
		cout << a[i] << endl;
	}
}