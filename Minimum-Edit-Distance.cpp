#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s,s1;
    getline(cin,s);
    getline(cin,s1);

    s = " "+s;
    s1= " "+s1;

    int m = s.size();
    int n = s1.size();
    int edit[m][n];
    memset(edit,0,sizeof(edit));
    for(int i=0; i<m; ++i)
    {
        edit[i][0]=i;
    }
    for(int i=0; i<n; ++i)
    {
        edit[0][i]=i;
    }
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(s1[i]==s[j])
            {
                edit[i][j] = edit[i-1][j-1];
            }
            else
            {
                edit[i][j] = 1 + min({edit[i-1][j], edit[i][j-1], edit[i-1][j-1]});
            }
        }
    }
    //cout << edit[m-1][n-1 ] <<"\n"; 
}
