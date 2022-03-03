#include <bits/stdc++.h>
using namespace std;

int main()
{
    int b, k, n, w; cin >> k >> n >> w;
    b = k * w *(w+1)/2-n; 
    cout <<((b >0)?b:0) << "\n";
    return 0;
}
