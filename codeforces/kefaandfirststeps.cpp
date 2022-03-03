#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin>>n;
    int max, curr;
    max = 0; curr = 1;
    int i = 0;
    int d1, d2; cin >> d1;
    while( i < n-1 )
    {
        cin >> d2;
        if( d2 < d1 )
        {
            if(curr > max)
                max = curr;
            curr = 1;
        }
        else
            curr++;

        d1 = d2;
        i++;
    }
    if(curr > max)
        max = curr;

    cout << max << "\n";
    return 0;
}
