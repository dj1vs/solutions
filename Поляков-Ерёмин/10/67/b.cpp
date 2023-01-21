#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
int main()
{
	int i, j;
	int N, M;
	cin >> N >> M;
	vector <vector <int>> m(N, vector <int>(M));
	long long int s = 0;
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < M; j++)
		{
			cin >> m[i][j];
		}
	}
	int K;
	cin >> K;
	for (i = 0; i < N; i++)
		for (j = 0; j < M; j++)
			if (m[i][j] == K) s++;
	cout << s;
}