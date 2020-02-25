#include <bits/stdc++.h>
using namespace std;

double xold[3] = {1, 1, 1};

void gauss(double **a, double *b) {
  double R[3], E[3];
  double m = 0.000001, max, sum;
  int i, j, k;
  double xnew[3];
  k = 1;
  do {
    cout << "Iteration number"
         << " " << k << "\t";
    max = 0.0;
    for (i = 0; i <= 2; i++) {
      sum = 0.0;
      for (j = 0; j <= 2; j++) {
        if (j < i)
          sum = sum + a[i][j] * xnew[j];
        else if (j > i)
          sum = sum + a[i][j] * xold[j];
      }
      xnew[i] = (b[i] - sum) / a[i][i];
      cout << "xnew" << i << "="
           << " " << xnew[i] << "\t";
      E[i] = fabs((xold[i] - xnew[i]) / xold[i]);
      if (E[i] > max)
        max = E[i];
      xold[i] = xnew[i];
    }
    cout << "\n";
    k = k + 1;
  } while (max > m);
  cout << "\nThe values of the variables:\n";
  for (int i = 0; i < 3; i++)
    cout << "X" << i + 1 << " =  " << xold[i] << endl;
}

int main() {
  double *b = new double[3];
  double **a = new double *[3];
  for (int i = 0; i < 3; i++) {
    a[i] = new double[3];
  }
  a[0][0] = 2;
  a[0][1] = 1;
  a[0][2] = 0;
  a[1][0] = 1;
  a[1][1] = 2;
  a[1][2] = 1;
  a[2][0] = 0;
  a[2][1] = 1;
  a[2][2] = 1;
  b[0] = 1;
  b[1] = 2;
  b[2] = 4;
  gauss(a, b);

  return 0;
}