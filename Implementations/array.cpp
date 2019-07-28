#include <bits/stdc++.h>
using namespace std;

int main()
{
	int k, n;
	cin >> k;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++)
		cin >> a[i];
	int c = 0, j = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] - a[j] > k)
		{
			c++;
			j = i;
		}
	}
	cout << c;
	return 0;
}
