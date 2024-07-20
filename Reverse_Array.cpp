#include <bits/stdc++.h>
using namespace std;

void reversed(int n,int arr[])
{
    int b[n];
        for(int i=0;i<n;i++)
        {
            b[i]=arr[n-i-1];
        }
        for(int i=0;i<n;i++)
        {
            cout<<b[i]<<" ";
        }  
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    reversed(n,a);
    return 0;
}
