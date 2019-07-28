
#include <bits/stdc++.h>

using namespace std;

bool compare(int i, int j) {
	return i > j;
}

int main() {
	vector<int> A;
	A.push_back(rand() % 50);
	A.push_back(rand() % 50);
	A.push_back(rand() % 50);
	A.push_back(rand() % 50);
	A.push_back(rand() % 50);
	A.push_back(rand() % 50);
	A.push_back(rand() % 50);
	A.push_back(rand() % 50);

	sort(A.begin(), A.end(), compare);
	for (int x : A) {
		cout << x << ' ';
	}cout << endl;

	return 0;
}
