#include <bits/stdc++.h>
using namespace std;
int main()
{
    int ans= 0, p, v, t,tt; cin >> tt;
    while(tt--)
    {
       cin >> p >> v >> t; 
       ans += (p+v+t)>1;
    }
    cout << ans << "\n";

    return 0;
}
