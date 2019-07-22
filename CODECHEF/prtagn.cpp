#include <bits/stdc++.h>
typedef long long int lli;
typedef unsigned long long int ulli;
// Generating the look-up table while pre-processing
#define P2(n) n, n ^ 1, n ^ 1, n
#define P4(n) P2(n), P2(n ^ 1), P2(n ^ 1), P2(n)
#define P6(n) P4(n), P4(n ^ 1), P4(n ^ 1), P4(n)
#define LOOK_UP P6(0), P6(1), P6(1), P6(0)

// LOOK_UP is the macro expansion to generate the table
unsigned int table[256] = {LOOK_UP};
using namespace std;

bool Parity(int num)
{
    int max = 16;

    // Dividing the number into 8-bit
    // chunks while performing X-OR
    while (max >= 8)
    {
        num = num ^ (num >> max);
        max = max / 2;
    }

    // Masking the number with 0xff (11111111)
    // to produce valid 8-bit result
    return table[num & 0xff];
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        vector<int> S = {};
        int q;
        cin >> q;
        int E = 0, O = 0;
        while (q--)
        {
            int x;
            cin >> x;
            vector<int> X = {};
            if (!S.empty())
            {
                for (int i = 0; i < S.size(); i++)
                {
                    if (S[i] != x)
                    {
                        X.push_back(S[i] ^ x);
                        if (Parity(S[i] ^ x))
                            O++;
                        else
                            E++;
                    }
                }
                for (auto ele : X)
                {
                    S.push_back(ele);
                }
            }
            S.push_back(x);
            if (Parity(x))
                O++;
            else
                E++;
            cout << E << ' ' << O << endl;
        }
    }

    return 0;
}