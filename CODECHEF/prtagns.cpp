#include <bits/stdc++.h>
using namespace std;
//DONT SUBMIT THIS !!
int main()
{
    //DONT SUBMIT THIS !!
    int t;
    cin >> t;
    int number[200000];
    number[0] = 0, number[1] = 1;
    for (int i = 2; i <= 200000; i++)
    {
        //DONT SUBMIT THIS !!
        number[i] = number[i / 2];
        if (i & 1)
            number[i]++;
    }
    bool present[200000];
    while (t--)
    {
        int E = 0, O = 0;
        memset(present, false, sizeof present);
        int q;
        cin >> q;
        int arr[q];
        unordered_set<int> s;
        for (int i = 0; i < q; i++)
        {
            cin >> arr[i];
            if (present[arr[i]])
            {
                cout << E << " " << O << endl;
                continue;
            }
            unordered_set<int> s1;
            unordered_set<int>::iterator itr;
            for (itr = s.begin(); itr != s.end(); itr++)
            {
                int temp = *itr ^ arr[i];
                s1.insert(temp);
                present[temp] = 1;
            }
            s.insert(arr[i]);
            present[arr[i]] = 1;
            for (auto b : s1)
            {
                s.insert(b);
            }
            if (number[arr[i]] & 1)
            {
                E = E + O;
                O = E + 1;
            }
            else
            {
                E = 2 * E + 1;
                O = 2 * O;
            }
            cout << E << ' ' << O << endl;
        }
    }
}