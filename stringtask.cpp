
#include <bits/stdc++.h>
#include <stdlib.h>
#include<string.h>
using namespace std;

int main()
{
    int i,n,m,k;
    int arr[51];
    string str;
    string Rstr;
    string s;
    string tem = ".";

    getline(cin, Rstr);



    for(i=0; i<Rstr.length(); i++)
    {

        if(Rstr[i]=='a' || Rstr[i]=='e' || Rstr[i]=='i' || Rstr[i]=='y'||Rstr[i]=='o' || Rstr[i]=='u' || Rstr[i]=='A' || Rstr[i]=='E' || Rstr[i]=='I' || Rstr[i]=='O' || Rstr[i]=='U' || Rstr[i]=='Y')
        {
            continue;
        }
        else
        {
            s +=  '.';
            s += tolower(Rstr[i]);
        }

    }
    cout << s ;



    return 0;
}
