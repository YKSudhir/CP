#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    string ans="";
    for(int i=0; i<s.size(); i++)
    {
        char curr =s[i];
        if(curr >= 'A' && curr<= 'Z'){
            if(curr=='A' || curr=='I' || curr=='O' || curr=='U' || curr=='E' || curr=='Y')
            {
                continue;
            }
            else
            {
                curr=curr-'A'+'a';
            }
        }
        else if(curr>='a' && curr<='z')
        {
            if (curr=='a' || curr=='i' || curr=='o' || curr=='u' || curr=='e'  || curr=='y')
            {
                continue;
            }
            else
            {
                curr =curr;
            }
            
        }
        ans+=".";
        ans+=curr;
    }
    cout<<ans;
}