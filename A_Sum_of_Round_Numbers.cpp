#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        int count = 0 ;
        vector<int>ans;
        int mul = 1;
        while(n!=0)
        {
            int rem = n%10;
            n = n/10;
            if(rem!=0)
            {
                count+=1;
                ans.push_back(rem*mul);
            }
            mul = mul*10;
        }
        cout<<count<<endl;
        for(auto it : ans) cout<<it<<" ";

        cout<<endl;
    }
    return 0;
}