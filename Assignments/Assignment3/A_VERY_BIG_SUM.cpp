https://www.hackerrank.com/challenges/a-very-big-sum/submissions/code/294563055

#include <bits/stdc++.h>
#include<vector>
#include<iostream>
using namespace std;

int main()
{   
    
    int i,n;
    cin>>n;
    long long A[n];
    long long p;
    for(i=0;i<n;i++)
    {
       cin>>A[i]; 
    }
    
     for(i=0;i<n;i++)
    {
      p+= A[i];
    }
  
  cout<<p;
    
}
