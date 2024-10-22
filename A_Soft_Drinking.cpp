#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n , k , l , c ,d ,p ,nl ,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int drink_toast = (k*l)/nl;
    int lime_toast = c*d;
    int salt_toast = p/np;
    int total_for_all = min(drink_toast , min(lime_toast , salt_toast));
    cout<<total_for_all/3;
    return 0 ;
}