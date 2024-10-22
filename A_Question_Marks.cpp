#include <bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int ans  = 0;
        int n;
        cin>>n;
        string s;
        cin>>s;
        int a , b , c , d ;
        a  = b = c = d =0;
        for(int i=0 ; i<4*n ; i++)
        {
            if(s[i]=='A')
            a++;
            else if(s[i]=='B')
            b++;
            else if(s[i]=='C')
            c++;
            else if(s[i]=='D')
            d++;
        }
        if(a<n)
        {
            ans+=a;
        }
        else if(a>=n){
            ans+=n;
        }

         if(b<n)
        {
            ans+=b;
        }
        else if(b>=n){
            ans+=n;
        }

         if(c<n)
        {
            ans+=c;
        }
        else if(c>=n){
            ans+=n;
        }

         if(d<n)
        {
            ans+=d;
        }
        else if(d>=n){
            ans+=n;
        }
    cout<<ans<<endl;
    }
    return 0;
}