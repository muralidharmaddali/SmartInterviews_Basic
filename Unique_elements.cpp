#include<bits/stdc++.h>
using namespace std;

int main()
{
   int n,cnt=0;
   cin>>n;
   int a[n],b[n];
   for(int i=0;i<n;i++)
   {
       cin>>a[i];
   }
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<n;j++)
       {
           if(a[i]==a[j])
           {
               cnt++;
           }
       }

       if(cnt==1)
       {
           cout<<a[i]<<" ";
       }
       cnt=0;
   }
   
return 0;
}