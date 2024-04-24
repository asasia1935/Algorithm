#include <iostream>
#include <vector>
#include <set>

using namespace std;

int a[15001], N, M, cnt;

int main(void)
{
	cin >> N >> M;
	for (int i = 0; i < N; i++)
	{
		cin >> a[i];
	}
	// 이 if문은 없어도 되는 문 -> 다만 시간 복잡도가 좀 빡빡한 문제일 경우 확실히 시간을 줄여주기 위한 방법을 익히기 위한 코드
	if (M > 200000)
		cout << 0 << "\n";
	else
	{
		for (int i = 0; i < N; i++)
		{
			for (int j = i + 1; j < N; j++)
			{
				if (a[i] + a[j] == M)
				{
					cnt++;
				}
			}
		}
	}
	cout << cnt << "\n";
}
