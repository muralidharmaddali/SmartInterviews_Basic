#include <bits/stdc++.h>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n=100;
    int a[n];
    for(int i=0;i<n-1;i++)
    {
        cin>>a[i];
    }
    int hash[n+1]={0};
    for(int i=0;i<n-1;i++)
    {
        hash[a[i]]++;
    }
    int res;
    for(int i=0;i<n;i++)
    {
        if(hash[i]==0)
        {
           res = i; 
        }
    }
    cout<<res;
    return 0;
}
