#include <bits/stdc++.h>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    float sum=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int mode;
    float mean,median;
    for(int i=0;i<n;i++){
        sum+=a[i];
    }
    mean = sum/n;
    cout<<fixed<<setprecision(2)<<mean<<" ";
    //median
    if(n%2==0)
    {
        median = (a[n/2-1] + a[n/2])/2.0;
    }
    else
    {
        median = a[n/2];
    }
    cout<<fixed<<setprecision(2)<<median<<" ";
    //mode
    unordered_map<float,int> m;
    int cnt=0;
    for(float b:a)
    {
        m[b]++;
        if(cnt<m[b])
        {
            cnt = m[b];
            mode = b;
        }
    }

    cout<<mode;
    return 0;
}
