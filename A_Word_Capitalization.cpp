#include <bits/stdc++.h>
using namespace std;
int main()
{
    string word;
    cin>>word;
    if(word[0]>='a' && word[0]<='z')
    {
        word[0] = word[0]-'a'+'A';
    }
cout<<word;
    return 0;
}