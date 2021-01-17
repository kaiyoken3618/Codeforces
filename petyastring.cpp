
#include <bits/stdc++.h>
#include <stdlib.h>
#include<string.h>
using namespace std;

int main()
{
    int i,n,m,a,b,c,tem =0,sum1=0,sum2=0,flag=0;
    string s1,s2;
    int res;
    cin >> s1 >> s2;
    for(i=0 ; i<s1.size() ; i++)
    {
    s1[i] = towlower(s1[i]);
    s2[i] = towlower(s2[i]);
    }
    if(s1 == s2)
    {
        cout << "0";
    }
    for(i=0 ; i<s1.size() ; i++)
    {
        if(s1[i] > s2[i])
        {
            cout << "1";
            break;
        }
        else if(s1[i] < s2[i])
        {
            cout << "-1";
            break;
        }
    }
return 0;
}
