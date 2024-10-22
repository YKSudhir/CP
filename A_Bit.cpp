#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin >> t;
    int x = 0;
    while (t--)
    {
        string s;
        cin>>s;
        if(s=="++X")
        {
            x = ++x;
        }
        else if (s=="--X") {
            x = --x;
        }
        else if (s=="X++") {
            x = ++x;
        }
        else if ("X--") {
            x = --x;
        }
    }
    cout<<x;
    return 0;
}