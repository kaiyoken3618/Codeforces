#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;

int main()
{
    int w;
    cin >> w;
    if(w%2==0 && w>2 && w>=1 && w<=100)
    {
        cout << "YES";
    }

    else
    {
        cout << "NO";
    }

    return 0;
}
