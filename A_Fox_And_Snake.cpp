#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n , m;
    cin>>n>>m;
    string s="";
    vector<string>ans;

    for(int i=1 ; i<=n  ; i++)
    {
        for(int j=1 ; j<=m ; j++)
        {
            if(i%2!=0)
            {
                s+="#";
            }
            else{
                int index= i/2;
                if(index%2!=0)
                {
                    if(j!=m)
                    {
                        s+=".";
                    }
                    else{
                        s+="#";
                    }
                }else{
                    if(j==1)
                    {
                        s+="#";
                    }
                    else{
                        s+=".";
                    }
                }
            }
        }
        ans.push_back(s);
        s="";
    }
    for(auto it : ans) 
    cout<<it<<endl;

    return 0;
}