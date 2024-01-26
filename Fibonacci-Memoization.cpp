// Fibonacchi using memoization 
#include <bits/stdc++.h>
using namespace std;

int fibo(int n,int ar[])
{
    if(n==0||n==1)
    {
        ar[n]=n;
        return ar[n]; 
    }
    if(ar[n]==-1)
    {
        ar[n] = fibo(n-1,ar)+fibo(n-2,ar);
        return ar[n];
    }
    return ar[n];
}

int main()
{
    int n;
    cin >> n;
    int ar[n+1];
    
    memset(ar,-1,sizeof(ar));

    int ans = fibo(n,ar);
    cout << ans << '\n';

}
