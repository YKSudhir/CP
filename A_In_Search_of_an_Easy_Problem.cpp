#include<iostream>
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
    bool flag = false;
    for(int i=0; i<n; i++)
    {
        if(arr[i] ==1)
        {
            flag = true;
            break;
        }
    }
    if(flag == true)
    cout<<"HARD";
    else
    cout<<"EASY";
    return 0;
}