#include <iostream>
using namespace std;

int main()
{   int t,a,b,c,d;
    cin>>t;
    while(t>0)
    {   cin>>a>>b>>c>>d;
        if((a+c==180)&&(b+d==180))
        cout<<"YES\n";
        else
        cout<<"NO\n";
        t--;
    }
    return 0;
}