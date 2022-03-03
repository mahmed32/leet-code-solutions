#include <bits/stdc++.h>
using namespace std;

bool recgen(string s, int i, int t)
{
    if(s.length() == i)
    {
        return t % stoi(s) == 0;
    }
    return recgen(s+to_string(7), i, t) ||
    recgen(s+to_string(4), i, t);
}

bool generate(int i, int t)
{
    string s = "";
    return recgen(s,i, t);
}


int main()
{
    int t; cin >> t;
    bool res = false;
    int len = to_string(t).length();
    for(int i = 1; i <= len; i++)
       res = res || generate(i, t); 
    
    cout << ((res)? "YES":"NO") << "\n";

    return 0;
}
