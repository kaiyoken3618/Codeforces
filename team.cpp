
#include <bits/stdc++.h>
#include <stdlib.h>
#include<string.h>
using namespace std;

int main()
{
    int i,n,m,a,b,c,tem =0;

    cin >> n;

    for(i=0 ; i<n ; i++)
    {

        cin >> a >> b >> c;
        if((a + b + c) >1){
            tem = tem +1;
        }
    }
    cout << tem;


    return 0;
}
