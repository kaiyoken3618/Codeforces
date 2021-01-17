
#include <bits/stdc++.h>
#include <stdlib.h>
#include<string.h>
#include <cmath>
using namespace std;

int main()
{
    int i,j,n,m,a,b,c=0,tem =0;
    int arr[10][10];
    int arr1[10][10];

    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            cin >> arr[i][j];
            if(arr[i][j] ==1){
                tem = abs(i-2)+abs(j-2) ;
            }
        }
    }


    cout << tem << endl;

    return 0;
}
