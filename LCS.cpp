// LCS code
#include <iostream>
#include <string>
using namespace std;
int main()
{

    string s1, s2;
    while (cin >> s1 >> s2)
    {

        int n = s1.size(), m = s2.size();

        int lcs[n + 1][m + 1];
        for (int i = 0; i < n + 1; i++)
        {
            for (int j = 0; j < m + 1; j++)
            {
                lcs[i][j] = 0;
            }
        }
        for (int i = 0; i < n + 1; i++)
        {
            for (int j = 0; j < m + 1; j++)
            {
                if (i == 0 || j == 0)
                {
                    lcs[i][j] = 0;
                }
                else
                {
                    if (s1[i - 1] == s2[j - 1])
                    {
                        lcs[i][j] = lcs[i - 1][j - 1] + 1;
                    }
                    else
                    {
                        lcs[i][j] = max(lcs[i - 1][j], lcs[i][j - 1]);
                    }
                }
            }
        }
        cout << lcs[n][m] << "\n";
    }
}
