//Khawla_Ahmed
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int is_prime(ll i)
{
    for(ll j=2;j<=sqrt(i);j++)
    {
        if(i%j==0 )
        {
            return 0;
        }

    }
    return 1;

}

int main()
{
    ll n,p1=0,p2=0;
    cin>>n;

    for(ll i=n;i>=5;i--)
    {
        if(is_prime(i))
        {
            ll x=i-2;
            if(is_prime(x))
            {
                p1=i;
                p2=i-2;
                break;
            }

        }
    }

cout<<p2<<" "<<p1<<"\n";


    return 0;
}
