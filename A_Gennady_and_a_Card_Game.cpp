#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    string arr[5];
    bool flag = false;
    for(int i=0; i<5; i++)
    {
        cin>>arr[i];
    }
    for(int i=0; i<5; i++)
    {
        if(arr[i][0]==s[0] || arr[i][1]==s[1])
        {
            cout<<"YES";
            flag = true;
            break;
        }
    }
   if(flag==false)
   {
    cout<<"NO";
   }
   return 0;
}