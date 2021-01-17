
#include <bits/stdc++.h>
#include <stdlib.h>
#include<string.h>
using namespace std;

int main()
{
    int i,n,m,k,tem =0;
    int arr[51];

    cin >> n >> k;

    for(i=0 ; i<n ; i++)
    {
        cin >> arr[i];

    }
    for(i=0 ; i<n ; i++)
    {
        if(arr[i] > 0 && arr[i] >= arr[k-1])
        {
            tem = tem +1;
        }
    }
    cout << tem;


    return 0;
}
