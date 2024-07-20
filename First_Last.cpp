#include <bits/stdc++.h>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n,k;
    cin>>n;
    int a[n];
    int b,c;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cin>>k;
    for(int i=0;i<n;i++)
    {
        if(k==a[i])
        {
           c = i;
           cout<<c<<" ";
           break;
        }
    }
    for(int i=0;i<n;i++)
        {
            if(k==a[i])
            {
            b = i;
            }
        }
        cout<<b;
    return 0;
}