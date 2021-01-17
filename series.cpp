

#include <bits/stdc++.h>
#include <stdlib.h>
#include<string.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cout << endl;
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<i+1;j++)
        {
            cout <<  n << " " ;
            if(j>0 && j<i+1)
            {
                cout <<  n-1 << " " ;
            }

        }
        cout << endl;
    }
    return 0;
}
