#include <bits/stdc++.h>

using namespace std;
bool isDistinct(int n)
{
    string sn = to_string(n);
    set<char> sc;
    for(auto c: sn)
        sc.insert(c);
    return sc.size()==sn.size();
}
int solve(int n)
{
    if(isDistinct(n))
        return n;
    return solve(n+1);
}

int main()
{
    int n; cin >> n;
    cout << solve(n+1) << "\n";
    return 0;
}
