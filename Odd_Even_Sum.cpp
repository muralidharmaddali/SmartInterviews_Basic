#include <bits/stdc++.h>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,sum=0,sum1=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            sum+=a[i];
        }
        else
        {
            sum1+=a[i];
        }
    }
    cout<<sum1<<" "<<sum;
    return 0;
}