#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        //write code here
        int n , k;
        cin>>n>>k;
        int a[n];
        int b[n];
        for(int i=0 ; i<n; i++)
        {
            cin>>a[i];
        }
        for(int i=0 ; i<n ; i++)
        {
            cin>>b[i];
        }
        int ans=0;
        int val = 0;
        while(k--)
        {
            ans = max(ans , val);
             for(int i=0 ; i<n ; i++)
                {
                    if(b[i]==1)
                    {
                         val = a[i] + 1;
                        int index = (n-1+1)/2 -1  ;
                        if(i!=index && index!=-1)
                        {
                            val+=a[index];
                        }
                        else if(index==i)
                        {
                            if(i==0)
                            val+=0;
                            else
                            {
                                val+=a[index-1];
                            }
                        }
                    }
                    else
                    {
                        val+=a[i];
                    }
                }
        }
        cout<<ans<<endl;
    }
    return 0;
}