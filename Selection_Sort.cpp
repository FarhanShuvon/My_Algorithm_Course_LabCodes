 /*  SelectionSort
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
    int cnt = 0;
    for (int i = 0; i < n-1; ++i)
    {
        for (int j = i + 1; j < n; ++j)
        {
            if (num[i] > num[j])
            {
                swap(num[i], num[j]);
                cnt++;
            }
        }
    }
    for (int i = 0; i < n; ++i)
    {
        cout << num[i];
        if(i!=n-1)
        {
            cout <<' ';
        }
    }
    cout <<'\n'<< cnt << '\n';

}
