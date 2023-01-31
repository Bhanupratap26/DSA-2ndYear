https://www.hackerrank.com/challenges/compare-the-triplets/submissions/code/294332478


#include <bits/stdc++.h>
#include <iostream>
#include<vector>

using namespace std;



vector<int> compareTriplets(vector<int> a, vector<int> b) {
    int i;
    int s=0;
    int d=0;
    vector<int> result;
     for (i=0; i<3; i++)
     {
         if(a[i]>b[i])
         {
             s=s+1;
         }
         
         else if(b[i]>a[i])
         {
             d=d+1;
         }
         
         else if(b[i]=a[i])
         {
             s=s+0;
             d=d+0;
         }
     }
     
     result.push_back(s);
    result.push_back(d); 
    return result;

}

int main()
{
   int a,i,b;
  
   vector<int> arr;
    vector<int> brr;
   for (i=0; i<3; i++) {
   cin>>a;
   arr.push_back(a);
   }
   
   for (i=0; i<3; i++) {
   cin>>b;
   brr.push_back(b);
   }
   vector <int> res = compareTriplets(arr, brr);
   
   cout << res[0]<< " " << res[1] <<endl;
   
   return 0;
}
