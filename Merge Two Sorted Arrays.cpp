#include <bits/stdc++.h>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    } 
    int m;
    cin>>m;
    int b[m];
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
    }
    vector<int> vc;
    for(int i=0;i<n;i++)
    {
        vc.emplace_back(a[i]);
    }
    for(int i=0;i<m;i++)
    {
        vc.emplace_back(b[i]);
    }
    sort(vc.begin(),vc.end());

    for(int i=0;i<vc.size();i++)
    {
        cout<<vc[i]<<" ";
    }
    return 0;
}
