#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int N, K;
	int Square[50];
	cin >> N >> K;
	for(int i = 0; i < N; ++i)
	{
		cin >> Square[i];
	}

	sort(Square, Square + N);


	if(N - K >= 0)
	{
		cout << Square[N - K] << " 0" << endl;
	}

	else
	{
		cout << -1 << endl;
	}

    return 0;
}
