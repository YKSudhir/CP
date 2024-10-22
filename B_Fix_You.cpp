c
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n , m;
        cin>>n>>m;
        char arr[n+1][m+1];
        for(int i=1 ; i<=n ; i++)
        {
            for(int j=1 ; j<=m ; j++)
            {
                cin>>arr[i][j];
            }
        }
        int count =0;
        for(int i=1 ; i<n ; i++)
        {
            if(arr[i][m]=='R')
            {
                count++;
            }
        }
        for(int j=1 ; j<m ; j++)
        {
            if(arr[n][j]=='D')
            {
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}