#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int list[n + 5], lis[n + 5];
    for (int i = 0; i < n; i++)
    {
        cin >> list[i];
        lis[i] = 1;
    }
    int j = 0, i = 1;
    while (i-1 != n)
    {
        if (list[j] < list[i] && i!=j)
        {
            lis[i] =  max(lis[j] + 1, lis[i]);
        }
        if (i - j == 1)
        {
            j = 0;
            i++;
        }
        else
        {
           j++;
        }
    }
    cout << lis[n-1] << '\n';
    cout << endl;
}