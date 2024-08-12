#include <bits/stdc++.h>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,m;
    cin>>n>>m;
    if(n>=1 && m<=100)
    {
        for(int i=0;i<n;i++)
        {
            long sum=0,a=0;
            for(int j=0;j<m;j++)
            {
                cin>>a;
                sum = sum+a;
            }
            cout<<sum<<endl;
            sum=0;
        }
    }
    return 0;
}