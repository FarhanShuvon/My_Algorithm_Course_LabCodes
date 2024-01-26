
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s2, s1;
        cin >> s1 >> s2;
        int n = s1.size(), m = s2.size();
        s1 = '\0' + s1;
        s2 = '\0' + s2;
        int dits[m + 1][n + 1];
        for (int i = 0; i < m + 1; ++i)
        {
            for (int j = 0; j < n + 1; ++j)
            {
                dits[i][j] = 0;
            }
        }

        for (int i = 0; i < m + 1; ++i)
        {
            for (int j = 0; j < n + 1; ++j)
            {
                if (j == 0)
                {
                    dits[i][j] = i;
                }
                else if (i == 0)
                {
                    dits[i][j] = j;
                }
                else if (s1[i] == s2[j])
                {
                    dits[i][j] = dits[i - 1][j - 1];
                }
                else
                {
                    dits[i][j] = 1 + min({dits[i - 1][j], dits[i][j - 1], dits[i - 1][j - 1]});
                }
            }
        }
        cout << dits[m][n] << '\n';
    }
    return 0;
}