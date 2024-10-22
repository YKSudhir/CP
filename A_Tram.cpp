#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a , b ;
    int ans = 0;
    int total = 0;
    bool flag = false;
    for(int i=0 ; i<n ; i++)
    {
        cin>>a>>b;
       if(a==0 and flag==false)
       {
        total = b;
        flag = true;
       }
       else
       {
        total -= a;
        total += b;
       }
                      ans = max(ans , total);

    }
    cout<<ans;
    return 0;
}