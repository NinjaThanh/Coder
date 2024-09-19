//VL05 - Tính giá tri S = 1 - 2 + 3 - ... + (3n + 1)
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, S = 0;
    cin >> n;
    for (int i = 1; i <= (3 * n) + 1; i++)
    {
        S += (pow(-1, i + 1)) * i; // S = (-1^i+1)*i ==> So chan thi cong, so le thi tru
    }
    cout << S;
    return 0;
}
