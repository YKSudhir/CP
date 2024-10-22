#include<iostream>
using namespace std;
int main()
{
    int x1 , x2 , x3 ;
    cin>>x1>>x2>>x3;
    int max_element = max(x1 , max(x2 , x3));
    int min_element = min(x1 , min(x2 , x3));
    int mid_element = (max_element - min_element)/2;
    int ans = abs(x1-mid_element) + abs(x2-mid_element) + abs(x3-mid_element);
    cout<<ans;
    return 0;
}