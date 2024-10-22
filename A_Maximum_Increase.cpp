#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long int  arr[n];
    for(int i=0 ; i<n ; i++)
    cin>>arr[i];
int count = 1;
int ans = 1;
for(int i=0 ; i<n-1 ; i++)
{
    if(arr[i+1]<=arr[i])
    {
        count = 1;
    }
    else
    {
        count++;
    }
    ans = max(ans,count);
}
cout<<ans;
    return 0;
}