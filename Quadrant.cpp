#include <bits/stdc++.h>
using namespace std;

void quadrant(int x, int y)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    if (x > 0 and y > 0)
        cout << 1 ;

    else if (x < 0 and y > 0)
        cout << 2 ;

    else if (x < 0 and y < 0)
        cout << 3 ;

    else if (x > 0 and y < 0)
        cout << 4 ;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int x, y ;
    cin >> x >> y ;

    quadrant(x, y);
    return 0;
}
