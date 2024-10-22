#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int rem ;
    
    int num = n ;
    int count = 0;
    while(num!=0)
    {
        num = num/10;
        count++;
    }
    if(count==1)
    {
        cout<<"NO";
    }
    else
    {
        bool flag = false;
         while(n!=0)
    {
        rem = n%10;
        n = n/10;
        if(rem!=4 and rem!=7)
        {
            cout<<"NO";
            flag = true;
            break;
        }
    }
    if(flag==false)
    {
        cout<<"YES";
    }
    }
   
    return 0;
}