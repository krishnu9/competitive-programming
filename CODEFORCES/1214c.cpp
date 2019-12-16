#include <bits/stdc++.h>
using namespace std;
#define lli long long int
#define ulli unsigned long long int

int main() {
  ios_base::sync_with_stdio(0);

  int n;
  string s;
  cin >> n;
  cin >> s;

  stack<char> st;

  int no = 0, nc = 0;

  if (n % 2 == 1) {
    cout << "No";
    return 0;
  }

  for (int i = 0; i < n; i++) {
    if (s[i] == '(') no++;
    if (s[i] == ')') nc++;
    if (!st.empty()) {
      if (st.top() == '(' && s[i] == ')')
        st.pop();
      else if (st.top() == ')' && s[i] == '(')
        st.pop();
      else
        st.push(s[i]);
    } else {
      st.push(s[i]);
    }
  }
  if (no != nc) {
    cout << "No";
    return 0;
  } else if (st.empty() || st.size() == 1)
    cout << "No";
    else if ()

  return 0;
}