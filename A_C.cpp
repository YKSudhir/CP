#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a , b ,n;
        cin>>a>>b>>n;
        int ans  =0;
        if(b<=a){
            while(a<=n){
                a+=b;
                ans++;
            }
        }
        else
        {
            while(b<=n)
            {
                b+=a;
                ans++;
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}