#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int count=0;
        int num = n;
        while(num>0)
        {
            num=num/10;
            count++;
        }
        int value = n;
        int count2 = count;
        int ans2 = 0;
        while(count2!=1)
        {
            value = value/10;
            count2--;
        }
        int ans1 =(value-1)*10;
        if(count==4)
        {
            ans2 = 10;
        }else if (count==3)
        {
            ans2 = 6;
        }
        else if (count==2)
        {
            ans2 = 3;
        }else
        {
            ans2 = 1;
        }
        cout<<ans1+ans2<<endl;
    }

    return 0;
}