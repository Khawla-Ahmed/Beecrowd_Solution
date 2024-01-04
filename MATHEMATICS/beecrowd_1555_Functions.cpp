//Khawla_Ahmed
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{

    ll n;
    cin>>n;

    while(n--)
    {
        int x,y;
        cin>>x>>y;
        int R=((3*x)*(3*x))+((y)*(y));
        int B=2*((x)*(x))+((5*y)*(5*y));
        int C=(-100)*x+(y*y*y);
        //cout<<R<<" "<<B<<" "<<C<<endl;
        if(R>=B  && R>=C)
        {
                cout<<"Rafael ganhou"<<endl;
        }
        else if(B>=R  && B>=C)
        {
                cout<<"Beto ganhou"<<endl;
        }
        else if(C>=R && C>=B)
        {
            cout<<"Carlos ganhou"<<endl;
        }
    }

    return 0;
}

