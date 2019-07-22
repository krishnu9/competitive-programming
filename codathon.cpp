/*
// Sample code to perform I/O:

#include <iostream>

using namespace std;

int main() {
	int num;
	cin >> num;										// Reading input from STDIN
	cout << "Input number is " << num << endl;		// Writing output to STDOUT
}

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here
#include "iostream"
using namespace std;

int main() {
  int n;
  int k,a,b,c;
  cin>>n;
  for (int i = 0; i < n; i++) {
    cin >> k;
    cin>>a>>b>>c;
    if((-a+b+c)==k||(-a-b+c)==k||(-a-b-c)==k||(-a+b-c)==k||(a+b+c)==k||(a-b+c)==k||(a-b-c)==k||(a+b-c)==k)
      cout<<"WIN"<<endl;
      else {
        cout<<"LOSE"<<endl;
      }
  }
  return 0;
}
