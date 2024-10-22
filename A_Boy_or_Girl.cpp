#include <bits/stdc++.h>
using namespace std;
int main()
{
    string word;
    cin>>word;
    set<char>s;
    for(auto it: word)
    s.insert(it);

int n = s.size();
if(n%2==0)
{
    cout<<"CHAT WITH HER!";
}
else
{
    cout<<"IGNORE HIM!";
}


    return 0;
}