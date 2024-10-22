#include<iostream>
using namespace std;
int main()
{
     int n;
     cin>>n;
     int count = 0;
     string arr[n];
     for(int i=0 ; i<n ; i++)
     {
        cin>>arr[i];
     }
     for(int i=0 ; i<n ; i++)
     {
        if(arr[i]=="Icosahedron")
        {
            count+=20;
        }
        else if(arr[i]=="Cube")
        {
            count+=6;
        }
        else if (arr[i]=="Tetrahedron")
        {
            count+=4;
        }
        else if(arr[i]=="Dodecahedron")
        {
            count+=12;
        }
        else if(arr[i]=="Octahedron")
        {
            count+=8;
        }
    }
    cout<<count;
    return 0;
}