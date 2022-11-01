https://www.hackerrank.com/challenges/birthday-cake-candles/problem?isFullScreen=true


#include <bits/stdc++.h>

using namespace std;


int main()
{
    int n,i;
    int A[n];
    cin>>n;
    
    for(i=0;i<n;i++)
    {
        cin>>A[i];
    }
     
     int big=0;
     for(i=0;i<n;i++)
     {
         big = max(big , A[i]);
     }
     
     int count = 1;
     for(i=0;i<n;i++)
     {
         if(A[i] == big)
         count++;
     }
     
     cout<<count<<endl;
}
