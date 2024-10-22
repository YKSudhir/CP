#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int count =1 , index=0 ;
    string ans ="";
    while(index<n)
    {
        ans+=s[index];
        index+=count;
        count++;
    }
    cout<<ans;
    return 0;
}