#include <bits/stdc++.h>

using namespace std;
/*
int main()
{
    string un; cin >> un;
    set<char> sc;
    for(auto c : un)
        sc.insert(c);
    cout << ((sc.size() & 1)? ("IGNORE HIM!") : ("CHAT WITH HER!")) << "\n";
    return 0;
}
*/
int main()
{
    string s; cin >> s;

    char letters[26];
    for(auto& i: letters)
        i = 0;

    for(auto c : s)
        letters[c-'a']++;

    int cd = 0;
    for(auto c : letters)
        cd += c>0;

    cout << ((cd& 1)? "IGNORE HIM!": "CHAT WITH HER!") << "\n";
    return 0;
}
