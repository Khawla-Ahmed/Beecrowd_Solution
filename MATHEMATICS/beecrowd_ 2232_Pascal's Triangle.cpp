//Khawla_Ahmed
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,result=0;
        cin>>n;
        ll x=n-1;
        for(int i=0;i<=x;i++)
        {
            result+=pow(2,i);
        }
        cout<<result<<endl;
    }
    return 0;
}
