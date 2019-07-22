// C++ code to demonstrate the working of binary_search()

#include<bits/stdc++.h>
using namespace std;

int main()
{
	// initializing vector of integers
	vector<int> arr = {10, 15, 20, 25, 30, 35};

	// using binary_search to check if 15 exists
	if (binary_search(arr.begin(), arr.end(), 15))
	cout << "15 exists in vector";
	else
	cout << "15 does not exist";
  //cout<<endl;
  //  this line shows that the stl function binary_search returns either 1
  //  or 0 and not the found indices.
	//cout<<binary_search(arr.begin(), arr.end(), 99);
	cout << endl;

	// using binary_search to check if 23 exists
	if (binary_search(arr.begin(), arr.end(), 23))
		cout << "23 exists in vector";
	else
		cout << "23 does not exist";

	cout << endl;
}
