#include <bits/stdc++.h>
#include <stdlib.h>
#include<string.h>
using namespace std;

int main()
{
    string str;
    int n;

    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> str;
        if(str.length()<=10)
        {
            cout <<str;
        }
        else
        {
            cout << str[0] << str.length()-2 << str[str.length()-1] << endl;
        }
    }



    return 0;
}
