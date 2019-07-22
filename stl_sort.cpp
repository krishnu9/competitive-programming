#include <bits/stdc++.h>

using namespace std;

int main()
{
	int A[5] = {5, 4, 2, 6, 1};
	int B[5];
	sort(A, A + 5, greater<int>());
	for (auto i : A)
	{
		cout << i << endl;
	}
}
