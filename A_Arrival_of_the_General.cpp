#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int min = INT_MIN;
    int max = INT_MAX;
    int max_index = 0;
    int min_index = 0;
    for(int i=0; i<n; i++)
    {
        if(arr[i]>=min)
        {
            max_index = i;
            min=arr[i];
        }
    }
    for(int i =max_index; i>0; i--)
    {
        swap(arr[i],arr[i-1]);
    }
    for(int i=0 ; i<n; i++)
    {
        if(arr[i]<=max)
        {
            min_index = 0;
            max = arr[i];
        }
    }
    cout<<((n-min_index)+(min_index));
    return 0;
}