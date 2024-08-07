#include <bits/stdc++.h>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int i,j,n;
    cin>>n;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(j==n-i-1)
            {
                cout<<"*";
            }
            else
            {
                cout<< n - j;
            }
            
        }
        cout<<endl;
    } 
    return 0;
}
