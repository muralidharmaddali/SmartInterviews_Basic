#include <bits/stdc++.h>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int zero=0,pos=0,neg=0;
    for(int i=0;i<n;i++)
    {
       if(arr[i]<0)
       {
           neg++;
       }
       if(arr[i]>0)
       {
           pos++;
       }
       if(arr[i]==0)
       {
           zero++;
       }
    }
    cout<<zero<<" "<<pos<<" "<<neg;   
    return 0;
}
