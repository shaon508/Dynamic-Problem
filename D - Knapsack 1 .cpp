// hi!thanks for watching my code :)

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ff first
#define ss second
const int SIZE=1e2+9;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
ll n,w;
ll a[SIZE],b[SIZE],dp[SIZE][100009];
ll fuc(int id,int sum)
{
    if(id==n)return 0;
    if(dp[id][sum]!=-1)return dp[id][sum];
    ll ans = fuc(id + 1, sum);
    if (a[id] + sum <= w)
    {
        ans = max(ans, fuc(id + 1, sum + a[id]) +b[id]);
    }
    return dp[id][sum]=ans;
}
int main()
{

    fast;
    memset(dp,-1,sizeof dp);
    cin>>n>>w;
    for(int i=0; i<n; i++)cin>>a[i]>>b[i];
    cout<<fuc(0,0)<<endl;
    return 0;
}


//    ***********    THE END  ***********




