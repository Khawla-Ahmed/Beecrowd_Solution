//Khawla_Ahmed
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    while(cin>>n)
    {
        ll x=n,i=1,result=n*n,f=0;
        while(true)
        {
            if((x-i)>0)
            {
                x=x-i;
                result+=(x*x);
            }
            else
            {
                break;
            }
        }
        if(n!=0)
        {
            cout<<result<<endl;
        }
    }
    return 0;
}
