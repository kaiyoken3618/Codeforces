#include <bits/stdc++.h>
#include <stdlib.h>
#include<string.h>
using namespace std;

int main()
{
   long long int r=0,s=0;
   int n,m,a;
   int i=0;
   int i1=0;



    cin >> n >> m >> a;


    if(n % a == 0){
        r = n/a;
    }
    else{
        r = (n/a) + 1;
    }
    if(m % a == 0){
        s = m/a;
    }
    else{
        s = (m/a) + 1;
    }

    cout << r*s ;
    return 0;
}

