#include <bits/stdc++.h>
#include <stdlib.h>
#include<string.h>
using namespace std;

int main()
{
    int i,n,m,a,b,c,tem =0;
    string s;

    cin >> n;
    for(i =0 ; i<n ; i++)
    {
        cin >> s;
        if((s[0] == '+' && s[1] == '+') || (s[1] == '+' && s[2] == '+'))
        {
            tem = tem + 1;
        }
        else if((s[0] == '-' && s[1] == '-') || (s[1] == '-' && s[2] == '-'))
        {
            tem = tem - 1;
        }
    }
    cout << tem;



    return 0;
}
