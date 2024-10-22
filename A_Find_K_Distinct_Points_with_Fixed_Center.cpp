#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        //write code here
        int Xc , Yc , k;
        cin>>Xc>>Yc>>k;

        int x[k];
        int y[k];

        int index1 = 0;
        int index2 = 0;

        x[index1++] = k*Xc;
        y[index2++]= k*Yc;

        k = k-1;
        
            for(int i=1; i<=k/2 ; i++)
        {
            int xindex1 = Xc-i;
            x[index1++] = xindex1;
            int xindex2 = Xc+i;
            x[index1++] = xindex2;
        }

        for(int i=1; i<=k/2 ; i++)
        {
            int yindex1 = Yc-i;
            y[index2++] = yindex1;
            int yindex2 = Yc+i;
            y[index2++] = yindex2;
        }


        if(k%2==1)
        {
            x[index1]=0;
            y[index2]=0;
        }
        for(int j=0; j<k ; j++)
        {
            cout<<x[j]<<" "<<y[j]<<endl;
        }
    }
    return 0;
}