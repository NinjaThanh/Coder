#include <bits/stdc++.h>
using namespace std;
int main()
{
    string S;
    cin >> S;
    if (S[0] == '-')
        cout << S.length() - 1;
    else
        cout << S.length();
    return 0;
}
