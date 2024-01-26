
/*  InsertonSort
    input: n -> Array size
    input: num[n] -> Array
    input: 1 56 6 12 7
    output: 1 6 7 12 56
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int num[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> num[i];
    }
    for (int i = 0; i < n; ++i)
    {
        int N = num[i];
        int j = i - 1;
        while (j >= 0 && num[j] > N)
        {
            num[j + 1] = num[j];
            j--;
        }
        num[j + 1] = N;
        for (int f = 0; f < n; f++)
        {
            cout << f << ' ';
        }
    }
    for (int i = 0; i < n; ++i)
    {
        cout << num[i] << ' ';
    }
    cout << '\n';
}
