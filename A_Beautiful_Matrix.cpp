#include <bits/stdc++.h>
using namespace std;
int main()
{
    int col = 0;
    int row = 0;
   int arr[7][7];
   for(int i=1 ; i<=5 ; i++)
   {
    for(int j=1 ; j<=5 ; j++ )
    {
        cin>>arr[i][j];
    }
   }
   for(int i=1 ; i<=5 ; i++)
   {
    for(int j=1 ; j<=5 ; j++)
    {
        if(arr[i][j]==1)
        {
            row = i;
            col = j;
            break;
        }
    }
   }
   cout<<abs(row-3)+abs(col-3);
}