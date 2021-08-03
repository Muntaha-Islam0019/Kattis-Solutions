#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int arr [6] ;
    int tempArr [6] ;

    arr [0] = 1 ;
    arr [1] = 1 ;
    arr [2] = 2 ;
    arr [3] = 2 ;
    arr [4] = 2 ;
    arr [5] = 8 ;

    for ( int count = 0 ; count < (sizeof(arr)/sizeof(*arr)) ; count++ )
    {
        cin >> tempArr [count] ;
    }

    for ( int count = 0 ; count < (sizeof(arr)/sizeof(*arr)) ; count++ )
    {

        int dif = abs(tempArr[count] - arr[count]) ;

        if ( (tempArr[count]) > (arr[count]) )
        {
            cout << (-1)*dif << " " ;
        }
        else
        {
            cout << dif << " " ;
        }
    }

    return 0;
}
