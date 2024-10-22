#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int total = 1 , ans = 1;
    while(total<=n)
    {
        total= total + 2;
       
        ans++;
    }
    cout<<ans;

    return 0;
}