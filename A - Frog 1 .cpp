// hi!thanks for watching my code :)

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ff first
#define ss second
const int SIZE=1e5+9;

ll maax(ll num1,ll num2,ll num3)
{
    if(num1>=num2)num2=num1;
    if(num2>=num3)num3=num2;
    return num3;
}
ll miin(ll num1,ll num2,ll num3)
{
    if(num1<=num2)num2=num1;
    if(num2<=num3)num3=num2;
    return num3;
}
ll GCD(ll a, ll b)
{

    if(b == 0)
        return a;
    else
        return GCD(b, a % b);
}
ll MOD(ll num1,ll num2)
{
    ll Ans;
    Ans= (num1-((num1/num2)*num2));
    return Ans;
}
ll power (ll num,ll poww)
{
    ll anss=1;
    for(ll i=0; i<poww; i++)
    {
        anss*=num;
    }
    return anss;
}
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
ll n,arrayy[SIZE],dp[SIZE];
ll fuc(ll i)
{
    if(i==1) return 0;
    if(dp[i]!=-1LL)return dp[i];
    ll cost=INT_MAX;
    cost=min(fuc(i-1)+abs(arrayy[i]-arrayy[i-1]),cost);
    if(i>2)cost=min(fuc(i-2)+abs(arrayy[i]-arrayy[i-2]),cost);
    return dp[i]=cost;
}
int main()
{

    fast;
    memset(dp,-1LL,sizeof dp);
    cin>>n;
    for(int i=1; i<=n; i++)cin>>arrayy[i];
    cout<<fuc(n)<<endl;
    return 0;
}


//    ***********    THE END  ***********
