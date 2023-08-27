
#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n;
     cin>>n;
     int a[n],i,b[n];

     for(i=0;i<n;i++)
          cin>>a[i];// 0 2 4 1 3

     for(i=0;i<n;i++)
     {
          b[a[i]]=i; 
          /* b[a[1]=1 -->b[2]=1
              b[a[2]]=2 --> b[4]=2*/
    }
     for(i=0;i<n;i++)
          cout<<b[i]<<" ";// 0 3 1 4 2 
}
