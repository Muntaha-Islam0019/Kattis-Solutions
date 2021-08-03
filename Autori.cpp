#include <iostream>
#include <vector>
using namespace std;

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string str ;
    cin >> str ;

    vector <char> v ;

    v.push_back(str[0]) ;

    for ( int i = 0 ; i < str.size() - 1 ; i++ )
    {
        if ( str[i] == '-' )
        {
            v.push_back(str[i+1]) ;
        }
    }

    for (auto ir = v.cbegin(); ir != v.cend(); ++ir)
    {
        cout << *ir ;
    }

    cout << endl ;

    return 0;
}
