#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{

    int n;
    cin>>n;
    int ans=0;
    int mul  = 1;
    int rem = 0;
    int a = 0;
    int num = n;
    int count =0;
    while(num!=0)
    {
        num=num/10;
        count+=1;
    }
    if(count==1)
    {
        cout<<n;
    }
    else
    {
        int dign = count;
        while (n!=0)
        {
        rem = n%10 ;
        n = n/10;
       if(dign==1)
       {
            if(rem==9)
            {
                a = rem*mul;
            }
            else if(rem!=9 and rem>4)
            {
                a = (9-rem)*mul;
            }
            else if (rem!=9 and rem<4)
            {
                a = rem*mul;
            }
       }
       else if(dign!=1)
       {
            if(rem>4)
            {
                a = (9-rem)*mul;
            }
            else
            {
                a = rem*mul;
            }
       }
        ans+=a;
        mul = mul *10;
        dign--;
        }
    cout<<ans;
    }
    return 0;
}