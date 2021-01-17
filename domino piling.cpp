
#include <bits/stdc++.h>
#include <stdlib.h>
#include<string.h>
using namespace std;

int main()
{
    int i,n,m,a,b,c,tem =0;

    cin >> m >> n;
    a = m * n;
    b = 2 * 1;
    if(a % b >=0)
    {
        tem = a / b;
    }
    cout << tem;


    return 0;
}
