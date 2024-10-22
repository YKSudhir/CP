#include <bits/stdc++.h>

using namespace std;
int main()
{
    string s;
    cin>>s;
    vector<int>nums;
    for(int i=0 ; i<s.size() ; i++)
    {
        if(s[i]!='+')
        {
            nums.push_back(s[i]-'0');
        }
    }
    sort(nums.begin(), nums.end());
    string ans="";
    int index=0;
    for(int i=0 ; i<s.size() ; i++)
    {
        if(i%2==0)
        {
            ans+=to_string(nums[index++]);
        }
        else
        {
            ans+='+';
        }
    }
    cout<<ans;

    return 0;
}