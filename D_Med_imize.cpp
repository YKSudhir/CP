#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        //write code here
        int ans = -1;
        int n , k ;
        cin>>n>>k;
        vector<int>a(n+1,0);
        for(int i=1 ; i<=n ; i++)
        {
            cin>>a[i];
        }
        if(k==1)
        {
            for(int i=1; i<=n ; i++)
            {
                ans = max(ans , a[i]);
            }
        }
        else{
             for(int i=1 ; i<=n ; i++)
        {
            for(int j=i ; j<=n ; j++)
            {
                if(j-i+1 == k )
                {
                    vector<int>temp(n-k+1 , 0);
                    for(int z = 1 ; z<=n ; z++)
                    {
                        if(z<i || z>j)
                        temp.push_back(a[z]);
                    }
                    sort(temp.begin(), temp.end());
                    ans = max(ans , temp[(temp.size()+1)/2]);
                }
            }
        }
        }
        cout<<ans<<endl;
    }
    return 0;
}