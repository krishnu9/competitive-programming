#include <bits/stdc++.h>
using namespace std;
void upgrade(int *a, int n)
{
	for (int i = 0; i < n; i++)
	{
		a[i]++;
	}
}
int main()
{
	vector<int> a(15, 0);
	for (int i = 0; i < a.size(); i++)
		cout << a[i] << ' '<< i;
	return 0;
}