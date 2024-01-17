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
int a[SIZE],b[SIZE],c[SIZE],maxx,n,dp[SIZE][4];
int fuc(int ind,int pre)
{
    if(ind==n)return 0;
    if(dp[ind][pre]!=-1)return dp[ind][pre];
    int maxx=INT_MIN;
    if(pre==0)
    {
        maxx=max(maxx,b[ind]+fuc(ind+1,1));
        maxx=max(maxx,c[ind]+fuc(ind+1,2));
    }
    else if(pre==1)
    {
        maxx=max(maxx,a[ind]+fuc(ind+1,0));
        maxx=max(maxx,c[ind]+fuc(ind+1,2));
    }
    else if(pre==2)
    {
        maxx=max(maxx,a[ind]+fuc(ind+1,0));
        maxx=max(maxx,b[ind]+fuc(ind+1,1));
    }
    else
    {
        maxx=max(maxx,a[ind]+fuc(ind+1,0));
        maxx=max(maxx,b[ind]+fuc(ind+1,1));
        maxx=max(maxx,c[ind]+fuc(ind+1,2));
    }
    return dp[ind][pre]=maxx;
}
int main()
{
    memset(dp,-1,sizeof dp);
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>a[i]>>b[i]>>c[i];
    }
    cout<<fuc(0,3)<<endl;
    return 0;
}


//    ***********    THE END  ***********


